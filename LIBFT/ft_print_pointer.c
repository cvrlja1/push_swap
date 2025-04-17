/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:50:52 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/05/20 19:04:58 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_pointer(unsigned long val, int	*counter)
{
	if (!val)
	{
		ft_putstr("(nil)", counter);
		return ;
	}
	ft_putstr("0x", counter);
	ft_print_hexa_lower(val, counter);
}
