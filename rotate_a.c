/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:16:18 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/08/27 20:31:07 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate_a(t_stack **stackA)
{
	t_stack	*firstEL;

	if (!*stackA)
		return (1);
	firstEL = (*stackA)->next;
	(*stackA) = firstEL;
	return (update_index(stackA), ft_printf("ra\n"), 0);
}