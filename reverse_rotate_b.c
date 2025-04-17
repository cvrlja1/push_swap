/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:19:33 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/08/27 20:30:58 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int reverse_rotate_b(t_stack **stackB)
{
	t_stack *firstEL;
	t_stack *lastEL;

	if (!*stackB)
		return (-1);
	firstEL = (*stackB)->next;
	lastEL = firstEL;
	if (firstEL->next == (*stackB))
	{
		(*stackB) = firstEL;
		return (1);
	}
	(*stackB)->next = firstEL->next;
	while (lastEL->next != (*stackB))
		lastEL = lastEL->next;
	lastEL->next = firstEL;
	firstEL->next = (*stackB);
	(*stackB) = firstEL;
	return (update_index(stackB), ft_printf("rrb\n"), 1);
}