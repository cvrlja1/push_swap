/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:52:31 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/05/30 16:31:21 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **ptr)
{
	if (!ptr || !*ptr)
		return ;
	free(*ptr);
	*ptr = NULL;
}

static char	*ft_remain(char *temp)
{
	int		i;
	int		j;
	char	*str;
	int		len;

	j = 0;
	i = 0;
	while (temp[i] != '\n' && temp[i] != '\0')
		i++;
	if (temp[i] == '\0')
		return (NULL);
	len = ft_strlen(temp + i + 1);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i++;
	while (temp[i] != '\0')
		str[j++] = temp[i++];
	str[j] = '\0';
	return (str);
}

static char	*next_line(char *str)
{
	char	*line;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (str[len] != '\n' && str[len] != '\0')
		len++;
	line = malloc((len + 1 + (str[len] == '\n')) * sizeof(char));
	if (!line)
		return (NULL);
	while (i < len)
	{
		line[i] = str[i];
		i++;
	}
	if (str[len] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

static char	*read_line(char **buffer, int fd, char **temp)
{
	int		bytes;
	char	*new_temp;

	if (!temp || !*temp)
	{
		*temp = malloc(1 * sizeof(char));
		if (!*temp)
			return (NULL);
		(*temp)[0] = '\0';
	}
	while (ft_strchr(*temp, '\n') == NULL)
	{
		bytes = read(fd, *buffer, BUFFER_SIZE);
		if (bytes < 0)
			return (ft_free(temp), NULL);
		if (bytes == 0)
			break ;
		(*buffer)[bytes] = '\0';
		new_temp = ft_strjoin(*temp, *buffer);
		ft_free(temp);
		*temp = new_temp;
		if (!*temp)
			return (NULL);
	}
	return (*temp);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	char		*line;
	static char	*temp = NULL;
	char		*remain;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (ft_free(&temp), NULL);
	temp = read_line(&buffer, fd, &temp);
	ft_free(&buffer);
	if (!temp || *temp == '\0')
		return (ft_free(&temp), NULL);
	line = next_line(temp);
	if (!line)
		return (ft_free(&temp), NULL);
	remain = ft_remain(temp);
	ft_free(&temp);
	temp = remain;
	if (temp && !*temp)
		ft_free(&temp);
	return (line);
}

/*#include <fcntl.h>
#include <stdio.h>

int main () {
	int fd = open("tests.txt", O_RDONLY);
	char *next_line = get_next_line(fd);
	for (int i = 0; i < 3; i++)
	{
		printf("%s", next_line);
		free(next_line);
		next_line = get_next_line(fd);
	}
	close(fd);
}*/
