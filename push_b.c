/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:55:50 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/08/27 20:30:30 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int push_b(t_stack **stackA, t_stack **stackB)
{
	t_stack *firstELA;
	t_stack *firstELB;

	if (!*stackA)
		return (0);	
	firstELA = (*stackA)->next;
	(*stackA)->next = firstELA->next;
	if (firstELA == (*stackA))
		(*stackA) = NULL;
	if (!*stackB)
	{
		(*stackB) = firstELA;
		(*stackB)->next = firstELA;
	}
	else
	{
		firstELB = (*stackB)->next;
		(*stackB)->next = firstELA;
		firstELA->next = firstELB;
	}
	return (update_index(stackA), update_index(stackB), ft_printf("pb\n"), 1);
}