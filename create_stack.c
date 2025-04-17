/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 09:34:17 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/08/27 20:28:37 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stack(int argc, char **argv, t_stack **stack)
{
	int		i;
	int		index;
	t_stack *node;

	i = argc - 1;
	index = i - 1;
	while (i > 0)
	{
		node = lst_new(ft_atoi(argv[i]), index);
		lst_add_front(stack, node);
		i--;
		index--;
	}
	node = find_last_node(stack);
	node->next = *stack;
	*stack = node;
}