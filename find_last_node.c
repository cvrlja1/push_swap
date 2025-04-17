/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_last_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:23:13 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/08/27 13:55:49 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_last_node(t_stack **stack)
{
	t_stack	*current;

	if (!*stack)
		return (0);
	current = *stack;
	while (current->next != NULL)
		current = current->next;
	return (current);
}