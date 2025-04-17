/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:45:33 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/08/27 19:53:06 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack **stackA)
{
	t_stack	*current;
	t_stack	*next;
	t_stack *head;

	current = (*stackA)->next;
	head = current;
	next = current->next;
	while (next != head)
	{
		if (current->data > next->data)
			return (-1);
		current = current->next;
		next = next->next;
	}
	return (0);
}