/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:22:15 by eaboudi           #+#    #+#             */
/*   Updated: 2024/08/04 11:38:00 by eaboudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
#define MINISHELL_H

# define Failure false
# define Success true
# define HISTORY_FILE "~/.bash_history"
# define META_CHARS " \t\n\'\"><|"

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
	SINGEL_QOUTE = '\'',
	DOUBLE_QUOTE = '\"',
	TABS = '\t',
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
	IN_SQUOTE,
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
	int		state;
	int		type;
	char	*content;
}	t_global;


/*----------------linked list functions--------------*/
bool	add_back(t_lst **head, t_lst  **new);
void	free_lst(t_lst	**head);
void	add_list(t_global *global);
t_lst	*new_node(void);
/*----------------utils functions-------------------*/
char	ft_strser(char *str, char c);
char	*ft_get_token(t_global *global);
int		ft_strlen_un_del(char *sep, char *str);
void	update_line(char **line, int len_skip);
void	skip_ec_t(t_global *global);


#endif