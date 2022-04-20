/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:11:13 by prossi            #+#    #+#             */
/*   Updated: 2022/04/20 18:39:01 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

//pa and pb (push)

void	push_stack_a(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);
void	push_stack_b(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

//sa, sb and sab (swap)

void	swap_stack_a(long *stack_a, int *numbers_in_stack_a);
void	swap_stack_b(long *stack_b, int *numbers_in_stack_b);
void	swap_stack_a_and_stack_b(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

//ra, rb and rr (rotate)

void	rotate_stack_a(long *stack_a, int *numbers_in_stack_a);
void	rotate_stack_b(long *stack_b, int *numbers_in_stack_b);
void	rotate_stack_a_and_stack_b(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

//rra, rrb and rrr (reserve rotate)

void	reserve_rotate_stack_a(long *stack_a, int *numbers_in_stack_a);
void	reserve_rotate_stack_b(long *stack_b, int *numbers_in_stack_b);
void	reserve_rotate_stack_a_and_stack_b(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

//Libft

int		ft_strlen(const char *str);
int		ft_isdigit(int i);
int		ft_atoi(const char *str);

char	**ft_split(char const *str, char c);

//Stack A and Stack B Logic

int		number_limits(long *stack_a, int numbers_in_stack_a);
int		repeated_numbers(long *stack_a, int numbers_in_stack_a);
int     is_only_numbers_in_the_stacks(char *numbers);
int		stack_size(int argc, char **argv);
int		numbers_input(long *stack_a, int *numbers_in_stack_a, char **argv, char**numbers_list);
int		standard_input(long *stack_a, int *numbers_in_stack_a, char **argv);
int		seperating_input_numbers(long *stack_a, int *numbers_in_stack_a, char **argv);

void	free_string(char **str);
void	free_stacks(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);
void    ft_reallocation(long *pointer, int startsize, int newsize);
void	parameters(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

//Sort 3 Numbers

void	sort_3_numbers(long *stack_a, int *numbers_in_stack_a);

//Sort 5 Numbers and all of the functions in that file

void	sort_5_numbers(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);
void	rotate_stack_a_radix(long *stack_a, int *numbers_in_stack_a);
void	reserve_rotate_stack_a_radix(long *stack_a, int *numbers_in_stack_a);
void	first_stack(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);
void	second_stack(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

//Sort beyond 3 and 5 Numbers and all of the functons in that file

void	sort_beyond_3_and_5_numbers(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);
void	sort_a_section_of_the_stack(long *array, int *stack_size);
void	swap_stack_a_first_time(long *copy, long *copy_swap_stack_a, long *stack_a, int *numbers_in_stack_a);
void	swap_stack_a_second_time(long *copy, long *copy_swap_stack_a, long *stack_a, int *numbers_in_stack_a);
void	swap_stack_a_third_time(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

#endif
