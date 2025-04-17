/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:20:53 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/08/27 19:14:52 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap_swap(t_stack **stackA, t_stack **stackB)
{
	int	sw_a;
	int	sw_b;

	sw_a = swap_a(stackA);
	sw_b = swap_b(stackB);
	if (!sw_a || !sw_b)
		return (-1);
	else
		return (ft_printf("ss\n"), 0);
}