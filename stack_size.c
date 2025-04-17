/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:56:22 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/08/27 14:00:35 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_size(t_stack **stack)
{
	int	size;
	t_stack *node;

	if (!stack || !*stack)
		return (-1);
	size = 1;
	node = (*stack)->next;
	while (node->next != *stack)
	{
		node = node->next;
		size++;
	}
	return (size);
}