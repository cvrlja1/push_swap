/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:12:00 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/08/21 11:45:22 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	int		len;

	len = ft_strlen(s);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (*s)
	{
		*res = *s;
		res++;
		s++;
	}
	*res = '\0';
	return (res - len);
}
