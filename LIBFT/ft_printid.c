/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:13:46 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/05/20 19:06:34 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
		ft_putnbr(n);
	}
	else if (n > 9)
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

static size_t	ft_numlen(int val)
{
	size_t	res;

	res = 0;
	if (val <= 0)
		res++;
	while (val)
	{
		res++;
		val /= 10;
	}
	return (res);
}

void	ft_printid(int val, int *counter)
{
	ft_putnbr(val);
	(*counter) += ft_numlen(val);
}
