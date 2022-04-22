/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seperate_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:20:44 by prossi            #+#    #+#             */
/*   Updated: 2022/04/22 15:18:16 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	free_string(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
}

int	numbers_input(long *stack_a, int *numbers_in_stack_a, char **argv, char**numbers_list)
{
	int	i;
	int	numbers;

	i = 0;
	numbers = 0;
	numbers_list = ft_split(argv[1], 32);
	while (numbers_list[i])
	{
		numbers++;
		i++;
	}
	numbers_in_stack_a[0] = numbers;
	numbers_in_stack_a[1] = numbers_in_stack_a[0];
	i = 0;
	while (i < numbers_in_stack_a[0])
	{
		stack_a[i] = ft_atoi(numbers_list[i]);
		i++;
	}
	free_string(numbers_list);
	free(numbers_list);
	return (0);
}

int	standard_input(long *stack_a, int *numbers_in_stack_a, char **argv)
{
	int	i;

	i = 0;
	while (i < numbers_in_stack_a[1])
	{
		if (is_only_numbers_in_the_stacks(argv[i + 1]) == 1)
			stack_a[i] = ft_atoi(argv[i + 1]);
		else
		{
			write(1, "Error\n", 6);
			return (-1);
		}
		i++;
	}
	return (0);
}

int	seperating_input_numbers(long *stack_a, int *numbers_in_stack_a, char **argv)
{
	char	**numbers_list;

	numbers_list = NULL;
	if (numbers_in_stack_a[0] == 1)
	{
		if (numbers_input(stack_a, numbers_in_stack_a, argv, numbers_list) == -1)
			return (-1);
	}
	else
	{
		if (standard_input(stack_a, numbers_in_stack_a, argv) == -1)
			return (-1);
	}
	if (repeated_numbers(stack_a, numbers_in_stack_a[1]) == -1)
		return (-1);
	if (number_limits(stack_a, numbers_in_stack_a[1] == -1))
			return (-1);
	return (0);
}
