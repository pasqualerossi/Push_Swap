/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_only_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:54:27 by prossi            #+#    #+#             */
/*   Updated: 2022/04/21 15:43:59 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

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
