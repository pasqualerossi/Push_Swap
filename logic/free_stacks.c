/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:50:54 by prossi            #+#    #+#             */
/*   Updated: 2022/04/19 14:52:59 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/push_swap.h"

void	free_stacks(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b)
{
	free(stack_a);
	free(stack_b);
	free(numbers_in_stack_a);
	free(numbers_in_stack_b);
	exit(0);
}
