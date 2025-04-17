/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:43:14 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/08/27 20:20:56 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "LIBFT/libft.h"
# define sa swap_a(stackA);

typedef struct s_stack
{
	int	data;
	int index;
	struct s_stack *next;
} t_stack;

void		create_stack(int argc, char **argv, t_stack **stack);
int			print_stack(t_stack **stack);
int			stack_size(t_stack **stack);
t_stack		*find_last_node(t_stack **stack);
void		lst_add_front(t_stack **lst, t_stack *new);
t_stack		*lst_new(int content, int index);
int			swap_a(t_stack **stack);
int			swap_b(t_stack **stack);
int			swap_swap(t_stack **stackA, t_stack **stackB);
int			destroy_node(t_stack **stack, t_stack *node);
int			push_a(t_stack **stackA, t_stack **stackB);
int			push_b(t_stack **stackA, t_stack **stackB);
int			rotate_a(t_stack **stackA);
int			rotate_b(t_stack **stackB);
int			rotate_rotate(t_stack **stackA, t_stack **stackB);
int			reverse_rotate_a(t_stack **stackA);
int			reverse_rotate_b(t_stack **stackB);
int			reverse_r_r(t_stack **stackA, t_stack **stackB);
int			is_sorted(t_stack **stackA);
int			update_index(t_stack **stack);

#endif