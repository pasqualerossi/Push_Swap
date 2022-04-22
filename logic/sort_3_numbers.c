/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:47:05 by prossi            #+#    #+#             */
/*   Updated: 2022/04/22 14:04:23 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	sort_3_numbers(long *stack_a, int *numbers_in_stack_a)
{
	if ((stack_a[0] > stack_a[1]) && (stack_a[1] < stack_a[2]) && (stack_a[0] < stack_a[2]))
	{
		swap_stack_a(stack_a, numbers_in_stack_a);
	}
	if ((stack_a[0] > stack_a[1]) && (stack_a[1] > stack_a[2]) && (stack_a[0] > stack_a[2]))
	{
		swap_stack_a(stack_a, numbers_in_stack_a);
		reserve_rotate_stack_a(stack_a, numbers_in_stack_a);
	}
	if ((stack_a[0] > stack_a[1]) && (stack_a[1] < stack_a[2]) && (stack_a[0] > stack_a[2]))
	{
		rotate_stack_a(stack_a, numbers_in_stack_a);
	}
	if ((stack_a[0] < stack_a[1]) && (stack_a[1] > stack_a[2]) && (stack_a[0] < stack_a[2]))
	{
		swap_stack_a(stack_a, numbers_in_stack_a);
		rotate_stack_a(stack_a, numbers_in_stack_a);
	}
	if ((stack_a[0] < stack_a[1]) && (stack_a[1] > stack_a[2]) && (stack_a[0] > stack_a[2]))
	{
		reserve_rotate_stack_a(stack_a, numbers_in_stack_a);
	}
}
