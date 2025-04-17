/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:22:19 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/08/27 20:31:14 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int rotate_b(t_stack **stackB)
{
	t_stack *firstEL;

	if (!*stackB)
		return (1);
	firstEL = (*stackB)->next;
	(*stackB) = firstEL;
	return (update_index(stackB), ft_printf("rb\n"), 0);
}