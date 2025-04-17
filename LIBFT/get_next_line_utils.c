/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:53:04 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/05/29 18:32:52 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s)
{
	char	*res;
	int		len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (*s)
		*res++ = *s++;
	*res = '\0';
	return (res);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*s3;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s3 = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!s3)
		return (NULL);
	while (*s1)
		*s3++ = *s1++;
	while (*s2)
		*s3++ = *s2++;
	*s3 = '\0';
	return (s3 - len1 - len2);
}

size_t	ft_strlen(char *s)
{
	size_t	in;

	in = 0;
	while (s[in])
		in++;
	return (in);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
