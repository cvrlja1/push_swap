/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 09:54:56 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/08/27 15:31:28 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	print_stack(t_stack **stack)
{
	t_stack	*node;

	if (!*stack)
		return(ft_printf("The stack is empty!\n"), -1);
	node = (*stack)->next;
	ft_printf("%d", node->data);
	node = node->next;
	while (node != (*stack)->next)
	{
		ft_printf("%d", node->data);
		node = node->next;
	}

	return (0);
}