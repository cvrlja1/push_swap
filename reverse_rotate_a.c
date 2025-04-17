/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:59:12 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/08/27 20:30:50 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	reverse_rotate_a(t_stack **stackA)
{
	t_stack	*firstEL;
	t_stack	*lastEL;

	if (!*stackA)
		return (-1);
	firstEL = (*stackA)->next;
	lastEL = firstEL;
	if (firstEL->next == (*stackA))
	{
		(*stackA) = firstEL;
		return (1);
	}
	(*stackA)->next = firstEL->next;
	while (lastEL->next != (*stackA))
		lastEL = lastEL->next;
	lastEL->next = firstEL;
	firstEL->next = (*stackA);
	(*stackA) = firstEL;
	return (update_index(stackA), ft_printf("rra\n"), 1);
}