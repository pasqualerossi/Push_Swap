/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:56:16 by prossi            #+#    #+#             */
/*   Updated: 2022/04/22 14:30:37 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

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
	write(1, "swap stack A\n", 13);
}

void	swap_stack_b(long *stack_b, int *numbers_in_stack_b)
{
	long *temporary;
	
	temporary = (long *)malloc(sizeof(long));
	if (*numbers_in_stack_b > 1)
	{
		temporary[0] = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temporary[0];
	}
	free(temporary);
	write(1, "swap stack B\n", 13);
}

void	swap_stack_a_and_stack_b(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b)
{
	long *temporary;

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
	write(1, "swap stack A and stack B at the same time\n", 42);
}
