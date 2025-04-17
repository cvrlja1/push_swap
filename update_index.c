/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 20:17:09 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/08/27 20:20:42 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	update_index(t_stack **stack)
{
	int		i;
	int		e;
	t_stack	*current;

	if (!*stack)
		return (-1);
	current = (*stack)->next;
	e = stack_size(stack);
	i = 0;
	while (i < e)
	{
		current->index = i;
		current = current->next;
		i++;
	}
	return (0);
}