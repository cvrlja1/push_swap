/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:36:55 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/08/21 11:44:16 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*s3;
	char	*res;

	if (!s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	s3 = (char *)malloc((ft_strlen(s1) + 2) * sizeof(char));
	if (!s3)
		return (NULL);
	res = s3;
	while (*s1)
		*s3++ = *s1++;
	while (*s2)
		*s3++ = *s2++;
	*s3 = '\0';
	return (res);
}

/*
int main() {
	char *s1 = "AAAAA";
	char *s2 = "BBBBB";
	char *res = ft_strjoin(s1, s2);

	printf("%s\n", res);
}
*/