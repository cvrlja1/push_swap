/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:02:47 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/04/18 16:40:16 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	in;

	in = 0;
	while (s[in] != '\0')
		in++;
	return (in);
}
