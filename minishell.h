/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:22:15 by eaboudi           #+#    #+#             */
/*   Updated: 2024/07/21 16:21:07 by tboussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
#define MINISHELL_H

# define Failure false
# define Success true
# define HISTORY_FILE "~/.bash_history"

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <errno.h>
#include <stdbool.h>
#include "libft/libft.h"

typedef enum s_type
{
	CMD,
	PIPE,
}	t_type;



typedef struct s_lst
{
	struct s_lst	*next;
	struct s_lst	*prev;
	t_type			type;
	int c;
}	t_lst;



typedef	struct s_global
{
	char	**env;
	char	*line_input;
}	t_global;


/*----------------linked list functions--------------*/
bool   add_back(t_lst **head, t_lst  **new);
t_lst   *new_node(int i);


#endif