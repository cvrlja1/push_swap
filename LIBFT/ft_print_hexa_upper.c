/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:16:58 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/05/20 19:46:19 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_hexa_upper(unsigned int n, int *counter)
{
	static char	*hex_digits = "0123456789ABCDEF";
	int			ostatak;

	if (n >= 16)
	{
		ft_print_hexa_upper(n / 16, counter);
	}
	ostatak = n % 16;
	ft_putchar(hex_digits[ostatak]);
	(*counter)++;
}
