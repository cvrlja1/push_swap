/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuns.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:37:21 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/05/20 19:04:26 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(unsigned int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		n = n + '0';
		ft_putchar(n);
	}
}

static size_t	ft_numlen(unsigned int val)
{
	size_t	res;

	res = 1;
	while (val / 10)
	{
		res++;
		val /= 10;
	}
	return (res);
}

void	ft_printuns(unsigned int val, int *counter)
{
	ft_putnbr(val);
	(*counter) += ft_numlen(val);
}
