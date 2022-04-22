/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_limits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:39:38 by prossi            #+#    #+#             */
/*   Updated: 2022/04/22 15:17:32 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

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
