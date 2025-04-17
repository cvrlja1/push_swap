/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:19:52 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/08/27 20:31:34 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int swap_b(t_stack **stackB)
{
	t_stack *second_el;
	t_stack *first_el;

	if (!*stackB)
		return (-1);
	if ((*stackB)->next == (*stackB))
		return (0);
	first_el = (*stackB)->next;
	second_el = first_el->next;
	if (first_el->next == *stackB)
	{
		*stackB = first_el;
	}
	else
	{
		first_el->next = second_el->next;
		second_el->next = first_el;
		(*stackB)->next = second_el;
	}
	return (update_index(stackB), ft_printf("sb\n"), 0);
}