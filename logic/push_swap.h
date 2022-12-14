/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42adel.org.au>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:11:13 by prossi            #+#    #+#             */
/*   Updated: 2022/12/14 13:04:28 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <errno.h>

// push

void	push_stack_a(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);
void	push_stack_b(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

// swap

void	swap_stack_a(long *stack_a, int *numbers_in_stack_a);

// rotate

void	rotate_stack_a(long *stack_a, int *numbers_in_stack_a);
void	rotate_stack_b(long *stack_b, int *numbers_in_stack_b);
void	rotate_stack_a_and_stack_b(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

// reverse rotate

void	reverse_rotate_stack_a(long *stack_a, int *numbers_in_stack_a);

// libft

int		ft_strlen(const char *str);
char	**ft_split(char const *str, char c);

// push_swap utils

int		number_limits(long *stack_a, int numbers_in_stack_a);
int		repeated_numbers(long *stack_a, int numbers_in_stack_a);
int		is_only_numbers_in_the_stacks(char *numbers);
int		stack_size(int argc, char **argv);
int		seperating_input_numbers(long *stack_a, int *numbers_in_stack_a, char **argv);
int		is_stack_sorted(long *stack_a, int *numbers_in_stack_a);

void	free_stacks(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);
void	parameters(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

// sorting

void	sort_3_numbers(long *stack_a, int *numbers_in_stack_a);
void	sort_5_numbers(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);
void	sort_beyond_3_and_5_numbers(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

#endif