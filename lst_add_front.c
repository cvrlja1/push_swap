/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:39:17 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/08/27 13:39:38 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void lst_add_front(t_stack **lst, t_stack *new)
{
	if (!lst || !new)
		return;
	new->next = *lst;
	*lst = new;
}