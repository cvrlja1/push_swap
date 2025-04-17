/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:22:41 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/08/27 20:30:13 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int push_a(t_stack **stackA, t_stack **stackB)
{
	t_stack *firstELA;
	t_stack *firstELB;

	if (!*stackB)
		return (0);
	firstELB = (*stackB)->next;
	(*stackB)->next = firstELB->next;
	if (firstELB == (*stackB))
		(*stackB) = NULL;
	if (!*stackA)
	{
		(*stackA) = firstELB;
		(*stackA)->next = firstELB;
	}
	else
	{
		firstELA = (*stackA)->next;
		(*stackA)->next = firstELB;
		firstELB->next = firstELA;
	}
	return (update_index(stackA), update_index(stackB), ft_printf("pa\n"), 1);
}