/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_stack_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:13:12 by prossi            #+#    #+#             */
/*   Updated: 2022/04/19 16:36:10 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/push_swap.h"

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
