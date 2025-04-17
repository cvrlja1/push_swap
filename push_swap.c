/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:05:54 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/08/27 20:35:00 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_stacks(t_stack **stackA, t_stack **stackB)
{
	ft_printf("Stack A\t\t\tStack B\n");
	print_stack(stackA);
	ft_printf("\t\t\t");
	print_stack(stackB);
	ft_printf("\n\n");
}

int	main(int argc, char **argv)
{
	t_stack	**stackA;
	t_stack	**stackB;

	if (argc == 1)
		return (0);
	stackA = (t_stack **)ft_calloc(1, sizeof(t_stack *));
	if (!stackA)
		return (-1);
	stackB = (t_stack **)ft_calloc(1, sizeof(t_stack *));
	if (!stackB)
		return (-1);
	create_stack(argc, argv, stackA);
}