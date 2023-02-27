/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:56:01 by prossi            #+#    #+#             */
/*   Updated: 2023/02/17 13:15:30 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	push_stack_a(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b)
{
	int	i;

	(numbers_in_stack_a[1])++;
	i = numbers_in_stack_a[1] - 1;
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = stack_b[0];
	i = 0;
	while (i < *numbers_in_stack_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	(*numbers_in_stack_b)--;
	if (*numbers_in_stack_b == 0)
		stack_b = NULL;
	write(1, "Push Stack A\n", 13);
}

void	push_stack_b(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b)
{
	int	i;

	(*numbers_in_stack_b)++;
	i = *numbers_in_stack_b - 1;
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = stack_a[0];
	i = 0;
	while (i < numbers_in_stack_a[1])
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	(numbers_in_stack_a[1])--;
	if (numbers_in_stack_a[1] == 0)
		stack_a = NULL;
	write(1, "Push Stack B\n", 13);
}
