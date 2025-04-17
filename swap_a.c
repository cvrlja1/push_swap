/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:17:12 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/08/27 20:29:05 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap_a(t_stack **stackA)
{
	t_stack	*second_el;
	t_stack	*first_el;

	if (!*stackA)
		return (-1);
	if ((*stackA)->next == (*stackA))
		return (0);
	first_el = (*stackA)->next;
	second_el = first_el->next;
	if (first_el->next == *stackA)
	{
		*stackA = first_el;
	}
	else
	{
		first_el->next = second_el->next;
		second_el->next = first_el;
		(*stackA)->next = second_el;
	}
	return (update_index(stackA), ft_printf("sa\n"), 0);
}