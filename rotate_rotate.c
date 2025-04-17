/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:24:04 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/08/27 20:31:23 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate_rotate(t_stack **stackA, t_stack **stackB)
{
	int	rot_a;
	int	rot_b;

	rot_a = rotate_a(stackA);
	rot_b = rotate_b(stackB);
	if (!rot_a || !rot_b)
		return (-1);
	else
		return (update_index(stackA), update_index(stackB), ft_printf("rr\n"), 0);
}