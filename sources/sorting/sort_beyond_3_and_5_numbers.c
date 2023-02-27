/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_beyond_3_and_5_numbers.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:12:42 by prossi            #+#    #+#             */
/*   Updated: 2023/02/17 13:15:48 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_a_section_of_the_stack(long *array, int *stack_size)
{
	long	i;
	long	j;
	long	temporary;

	i = 0;
	j = 0;
	while (i < stack_size[0])
	{
		j = i + 1;
		while (j < stack_size[0])
		{
			if (array[i] > array[j])
			{
				temporary = array[i];
				array[i] = array[j];
				array[j] = temporary;
			}
			j++;
		}
		i++;
	}
}

void	swap_stack_a_first_time(long *copy, long *copy_swap_stack_a, long *stack_a, int *numbers_in_stack_a)
{
	int	i;

	i = 0;
	while (i < numbers_in_stack_a[0])
	{
		copy[i] = stack_a[i];
		copy_swap_stack_a[i] = stack_a[i];
		i++;
	}
}

void	swap_stack_a_second_time(long *copy, long *copy_swap_stack_a, long *stack_a, int *numbers_in_stack_a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < numbers_in_stack_a[1])
	{
		j = 0;
		while (j < numbers_in_stack_a[0])
		{
			if (copy_swap_stack_a[i] == copy[j])
					stack_a[i] = j;
			j++;
		}
		++i;
	}
}

void	swap_stack_a_third_time(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b)
{
	int	maximum_number;
	int	maximum_bits;
	int	loop_through[2];

	maximum_number = numbers_in_stack_a[1] - 1;
	maximum_bits = 0;
	loop_through[0] = 0;
	loop_through[1] = 0;
	while ((maximum_number >> maximum_bits) != 0)
		++maximum_bits;
	while (loop_through[0] < maximum_bits)
	{
		loop_through[1] = 0;
		while (loop_through[1] < numbers_in_stack_a[0])
		{
			if (((stack_a[0] >> loop_through[0]) & 1) == 1)
				rotate_stack_a(stack_a, numbers_in_stack_a);
			else
				push_stack_b(stack_a, stack_b, numbers_in_stack_a, numbers_in_stack_b);
			++loop_through[1];
		}
		while (*numbers_in_stack_b != 0)
			push_stack_a(stack_a, stack_b, numbers_in_stack_a, numbers_in_stack_b);
		++loop_through[0];
	}
}

void	sort_beyond_3_and_5_numbers(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b)
{
	long	*copy;
	long	*copy_swap_stack_a;

	copy = (long *)malloc(numbers_in_stack_a[0] * sizeof(long));
	copy_swap_stack_a = (long *)malloc(numbers_in_stack_a[0] * sizeof(long));
	swap_stack_a_first_time(copy, copy_swap_stack_a, stack_a, numbers_in_stack_a);
	sort_a_section_of_the_stack(copy, numbers_in_stack_a);
	swap_stack_a_second_time(copy, copy_swap_stack_a, stack_a, numbers_in_stack_a);
	free(copy);
	free(copy_swap_stack_a);
	swap_stack_a_third_time(stack_a, stack_b, numbers_in_stack_a, numbers_in_stack_b);
}
