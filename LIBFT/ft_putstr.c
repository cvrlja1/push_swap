/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:00:42 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/05/20 16:05:14 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *s, int *counter)
{
	if (!s)
	{
		ft_putstr("(null)", counter);
		return ;
	}
	while (*s)
	{
		ft_putchar(*s);
		s++;
		(*counter)++;
	}
}
