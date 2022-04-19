/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:23:09 by prossi            #+#    #+#             */
/*   Updated: 2022/04/19 14:27:26 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/push_swap.h"

void	free_and_exit(int *numbers_in_stack_a, int *numbers_in_stack_b)
{
	free(numbers_in_stack_a);
	free(numbers_in_stack_b);
	exit(0);
}

void	free_and_exit_without_errors(int *numbers_in_stack_a, int *numbers_in_stack_b)
{
	free(numbers_in_stack_a);
	free(numbers_in_stack_b);
	write(1, "Error\n", 6);
	exit(0);
}

void check_parameters(int argc, char **argv, int *numbers_in_stack_a, int *numbers_in_stack_b)
{
	int		i;
	size_t	j;

	i = 1;
	j = 0;
	if (argc < 2)
		free_and_exit(numbers_in_stack_a, numbers_in_stack_b);
	while (i < argc)
	{
		if ((argv[i][ft_strlen(argv[i]) - 1] == ' ') || (argv[i][0] == ' '))
			free_and_exit_without_errors(numbers_in_stack_a, numbers_in_stack_b);
		j = 0;
		while (j < ft_strlen(argv[i]))
		{
			if (((argv[i][j] < 48) || (argv[i][j] > 57)) && (argv[i][j] != 32))
			{
				if (((argv[i][j] != 45)
							free_and_exit_without_errors(numbers_in_stack_a, numbers_in_stack_b);
			}
			if ((argv[i][j] == 32) && (argv[i][j + 1] == 32))
				free_and_exit_without_errors(numbers_in_stack_a, numbers_in_stack_b);
			j++;
		}
		i++;
	}
}

void	set_numbers(int *numbers_in_stack_a, int *numbers_in_stack_b, int argc)
{
	numbers_in_stack_a[0] = argc - 1;
	numbers_in_stack_a[1] = numbers_in_stack_a[0];
	*numbers_in_stack_b = 0;
}

int	main(int argc, char **argv)
{
	long	*stack_a;
	long	*stack_b;
	int		*sa;
	int		*sb;

	sa = (int *)malloc(2 * sizeof(int));
	sb = (int *)malloc(sizeof(int));
	check_parameters(argc, argv, sa, sb);
	set_numbers(sa, sb, argc);
