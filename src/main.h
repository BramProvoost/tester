/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bprovoos <bprovoos@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/18 10:18:06 by bprovoos      #+#    #+#                 */
/*   Updated: 2022/01/21 11:02:36 by bprovoos      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

typedef struct	s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

# include "libft.h"
# include "ft_printf.h"
# include "swap.h"
# include "push.h"
# include "rotate.h"
# include "reverse_rotate.h"

# ifndef MY_COLORS_H
#  define MY_COLORS_H

#  define NO_COLOR "\033[0m"
#  define RED "\033[38;5;1m"
#  define GREEN "\033[38;5;2m"
#  define YELLOW "\033[38;5;3m"
#  define BLUE "\033[38;5;4m"
#  define MAGENTA "\033[38;5;5m"
#  define CYAN "\033[38;5;6m"
#  define WHITE "\033[38;5;7m"
#  define GRAY "\033[38;5;8m"

# endif

void	print_stacks(t_node *stack_a, t_node *stack_b);

#endif