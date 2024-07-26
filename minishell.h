/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:22:15 by eaboudi           #+#    #+#             */
/*   Updated: 2024/07/26 12:07:27 by eaboudi          ###   ########.fr       */
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


typedef enum e_type
{
	WORD = -1,
	WHITE_SPACE = ' ',
	NEW_LINE = '\n',
	QOUTE = '\'',
	DOUBLE_QUOTE = '\"',
	TAB = '\t',
	ESCAPE = '\\',
	ENV = '$',
	PIPE = '|',
	REDIR_IN = '<',
	REDIR_OUT = '>',
	HERE_DOC,
	DREDIR_OUT,
}	t_type;


typedef enum e_state
{
	IN_DQUOTE,
	IN_QUOTE,
	GENERAL,
}	t_state;


typedef struct s_lst
{
	char			*content;
	struct s_lst	*next;
	struct s_lst	*prev;
	t_type			type;
	t_state			state;
	int 			len;
}	t_lst;

typedef	struct s_global
{
	char	**env;
	char	*line_input;
	t_lst	*head;
}	t_global;


/*----------------linked list functions--------------*/
bool   add_back(t_lst **head, t_lst  **new);
t_lst   *new_node(int i);
/*----------------utils functions-------------------*/
int		ft_strser(char *str, char c);


#endif