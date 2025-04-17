/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:12:04 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/05/20 19:49:52 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_hexa_lower(unsigned long n, int *counter)
{
	static char	*hex_digits = "0123456789abcdef";
	int			ostatak;

	if (n >= 16)
	{
		ft_print_hexa_lower(n / 16, counter);
	}
	ostatak = n % 16;
	ft_putchar(hex_digits[ostatak]);
	(*counter)++;
}
