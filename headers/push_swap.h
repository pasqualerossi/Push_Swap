/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:11:13 by prossi            #+#    #+#             */
/*   Updated: 2022/04/22 16:11:15 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <errno.h>

//pa (push stack a) and pb (push stack b)

void	push_stack_a(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);
void	push_stack_b(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

//sa (swap stack a), sb (swap stack b) and sab (swap stack a and stack b at the same time)

void	swap_stack_a(long *stack_a, int *numbers_in_stack_a);
void	swap_stack_b(long *stack_b, int *numbers_in_stack_b);
void	swap_stack_a_and_stack_b(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

//ra (rotate stack a), rb (rotate stack b) and rr (rotate stack a and stack b at the same time)

void	rotate_stack_a(long *stack_a, int *numbers_in_stack_a);
void	rotate_stack_b(long *stack_b, int *numbers_in_stack_b);
void	rotate_stack_a_and_stack_b(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

//rra (reverse rotate stack a), rrb (reverse rotate stack b) and rrr (reverse rotate both stack a and stack b at the same time)

void	reverse_rotate_stack_a(long *stack_a, int *numbers_in_stack_a);
void	reverse_rotate_stack_b(long *stack_b, int *numbers_in_stack_b);
void	reverse_rotate_stack_a_and_stack_b(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

//libft (all libft functions required for this project)

int		ft_strlen(const char *str);
int		ft_isdigit(int i);
int		ft_atoi(const char *str);

char	**ft_split(char const *str, char c);

//stack a and stack b logic 

int		number_limits(long *stack_a, int numbers_in_stack_a);
int		repeated_numbers(long *stack_a, int numbers_in_stack_a);
int		is_only_numbers_in_the_stacks(char *numbers);
int		stack_size(int argc, char **argv);
int		numbers_input(long *stack_a, int *numbers_in_stack_a, char **argv, char**numbers_list);
int		standard_input(long *stack_a, int *numbers_in_stack_a, char **argv);
int		seperating_input_numbers(long *stack_a, int *numbers_in_stack_a, char **argv);
int		is_stack_sorted(long *stack_a, int *numbers_in_stack_a);

void	free_string(char **str);
void	free_stacks(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);
void	ft_reallocation(long *pointer, int startsize, int newsize);
void	parameters(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

//sort 3 numbers in stack a

void	sort_3_numbers(long *stack_a, int *numbers_in_stack_a);

//sort 5 numbers in both stack a and stack b and all of the functions in that file

void	sort_5_numbers(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);
void	rotate_stack_a_radix(long *stack_a, int *numbers_in_stack_a);
void	reverse_rotate_stack_a_radix(long *stack_a, int *numbers_in_stack_a);
void	first_stack(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);
void	second_stack(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

//sort beyond 3 and 5 numbers in both stack a and stack b and all of the functons in that file

void	sort_beyond_3_and_5_numbers(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);
void	sort_a_section_of_the_stack(long *array, int *stack_size);
void	swap_stack_a_first_time(long *copy, long *copy_swap_stack_a, long *stack_a, int *numbers_in_stack_a);
void	swap_stack_a_second_time(long *copy, long *copy_swap_stack_a, long *stack_a, int *numbers_in_stack_a);
void	swap_stack_a_third_time(long *stack_a, long *stack_b, int *numbers_in_stack_a, int *numbers_in_stack_b);

//int main functions required to run the push_swap program

void	free_and_exit(int *numbers_in_stack_a, int *numbers_in_stack_b);
void	free_and_exit_without_errors(int *numbers_in_stack_a, int *numbers_in_stack_b);
void	check_parameters(int argc, char **argv, int *numbers_in_stack_a, int *numbers_in_stack_b);
void	set_numbers(int *numbers_in_stack_a, int *numbers_in_stack_b, int argc);

int		main(int argc, char **argv);

#endif
