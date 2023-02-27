/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:56:16 by prossi            #+#    #+#             */
/*   Updated: 2023/02/17 13:15:39 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap_stack_a(long *stack_a, int *numbers_in_stack_a)
{
	long	*temporary;

	temporary = (long *)malloc(sizeof(long));
	if (numbers_in_stack_a[1] > 1)
	{
		temporary[0] = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = temporary[0];
	}
	free(temporary);
	write(1, "Swap Stack A\n", 13);
}

void	swap_stack_b(long *stack_b, int *numbers_in_stack_b)
{
	long	*temporary;

	temporary = (long *)malloc(sizeof(long));
	if (*numbers_in_stack_b > 1)
	{
		temporary[0] = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temporary[0];
	}
	free(temporary);
	write(1, "Swap Stack B\n", 13);
}

void	swap_stack_a_and_stack_b(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b)
{
	long	*temporary;

	temporary = (long *)malloc(sizeof(long));
	if (numbers_in_stack_a[1] > 1)
	{
		temporary[0] = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = temporary[0];
	}
	if (*numbers_in_stack_b > 1)
	{
		temporary[0] = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temporary[0];
	}
	free(temporary);
	write(1, "Swap both Stack A and Stack B\n", 42);
}
