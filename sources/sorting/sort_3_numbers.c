/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:00:31 by prossi            #+#    #+#             */
/*   Updated: 2023/02/17 13:15:43 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_3_numbers(long *stack_a, int *numbers_in_stack_a)
{
	if ((stack_a[0] > stack_a[1]) && (stack_a[1] < stack_a[2]) && (stack_a[0] < stack_a[2]))
		swap_stack_a(stack_a, numbers_in_stack_a);
	if ((stack_a[0] > stack_a[1]) && (stack_a[1] > stack_a[2]) && (stack_a[0] > stack_a[2]))
	{
		swap_stack_a(stack_a, numbers_in_stack_a);
		reverse_rotate_stack_a(stack_a, numbers_in_stack_a);
	}
	if ((stack_a[0] > stack_a[1]) && (stack_a[1] < stack_a[2]) && (stack_a[0] > stack_a[2]))
		rotate_stack_a(stack_a, numbers_in_stack_a);
	if ((stack_a[0] < stack_a[1]) && (stack_a[1] > stack_a[2]) && (stack_a[0] < stack_a[2]))
	{
		swap_stack_a(stack_a, numbers_in_stack_a);
		rotate_stack_a(stack_a, numbers_in_stack_a);
	}
	if ((stack_a[0] < stack_a[1]) && (stack_a[1] > stack_a[2]) && (stack_a[0] > stack_a[2]))
		reverse_rotate_stack_a(stack_a, numbers_in_stack_a);
}
