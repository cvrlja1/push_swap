/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_r_r.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:20:55 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/08/27 20:30:45 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	reverse_r_r(t_stack **stackA, t_stack **stackB)
{
	int	r_ra;
	int	r_rb;

	r_ra = reverse_rotate_a(stackA);
	r_rb = reverse_rotate_b(stackB);
	if (!r_ra || !r_rb)
		return (-1);
	else
		return (update_index(stackA), update_index(stackB), ft_printf("rrr\n"), 0);
}