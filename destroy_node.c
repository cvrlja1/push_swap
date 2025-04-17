/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:26:59 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/08/27 14:48:29 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	destroy_node(t_stack **stack, t_stack *node)
{
	t_stack	*temp;

	temp = node->next;
	free(node);
	(*stack)->next = temp;
	return (0);
}