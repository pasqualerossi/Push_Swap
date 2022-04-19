/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:44:23 by prossi            #+#    #+#             */
/*   Updated: 2022/04/19 14:49:04 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/push_swap.h"

int	repeated_numbers(long *stack_a, int numbers_in_stack_a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < numbers_in_stack_a)
	{
		j = 0;
		while (j < numbers_in_stack_a)
		{
			if ((stack_a[i] == stack_a[j]) && (i != j))
			{
				write(1, "Error\n", 6);
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
