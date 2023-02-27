/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:54:27 by prossi            #+#    #+#             */
/*   Updated: 2023/02/17 13:15:53 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_isdigit(int i)
{
	while ('0' <= i && i <= '9')
		return (1);
	return (0);
}

int	is_only_numbers_in_the_stacks(char *numbers)
{
	int	i;
	int	minus;

	i = 0;
	minus = 0;
	while (numbers[i])
	{
		if (numbers[i] == 45)
			minus++;
		else if (ft_isdigit(numbers[i]) == 0)
			return (0);
		i++;
	}
	if (minus > 1)
		return (0);
	return (1);
}

int	number_limits(long *stack_a, int numbers_in_stack_a)
{
	int	i;

	i = 0;
	while (i < numbers_in_stack_a)
	{
		if ((stack_a[i] > 2147483647) || (stack_a[i] < -2147483648))
		{
			write(1, "Error\n", 6);
			return (-1);
		}
		i++;
	}
	return (0);
}

int	is_stack_sorted(long *stack_a, int *numbers_in_stack_a)
{
	int		i;
	int		j;
	long	max;

	i = 1;
	j = 0;
	max = stack_a[0];
	while (i < numbers_in_stack_a[1])
	{
		if (stack_a[i] > max)
		{
			max = stack_a[i];
			j++;
		}
		i++;
	}
	if (j == numbers_in_stack_a[1] - 1)
		return (0);
	return (-1);
}
