/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:11:13 by prossi            #+#    #+#             */
/*   Updated: 2022/04/19 17:02:57 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

//push
void	push_stack_a(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);
void	push_stack_b(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

//swap
void	swap_stack_a(long *stack_a, int *numbers_in_stack_a);
void	swap_stack_b(long *stack_b, int *numbers_in_stack_b);
void	swap_stack_a_and_stack_b(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

//rotate
void	rotate_stack_a(long *stack_a, int *numbers_in_stack_a);
void	rotate_stack_b(long *stack_b, int *numbers_in_stack_b);
void	rotate_stack_a_and_stack_b(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

//reserve rotate
void	reserve_rotate_stack_a(long *stack_a, int *numbers_in_stack_a);
void	reserve_rotate_stack_b(long *stack_b, int *numbers_in_stack_b);
void	reserve_rotate_stack_a_and_stack_b(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

//libft
int		ft_strlen(const char *str);
int		ft_isdigit(int i);
int		ft_atoi(const char *str);

char	**ft_split(char const *str, char c);

//logic
int		number_limits(long *stack_a, int numbers_in_stack_a);
int		repeated_numbers(long *stack_a, int numbers_in_stack_a);
int     is_only_numbers_in_the_stacks(char *numbers);
int		stack_size(int argc, char **argv);

void	free_stacks(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);
void    ft_reallocation(long *pointer, int startsize, int newsize);
void	parameters(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

#endif
