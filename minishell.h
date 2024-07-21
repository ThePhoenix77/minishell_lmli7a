/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 19:32:36 by eaboudi           #+#    #+#             */
/*   Updated: 2024/07/21 11:41:37 by eaboudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
#define MINISHELL_H

# define Failure false
# define Success true
# define HISTORY_FILE ".my_shell_history"

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <stdbool.h>
#include "libft/libft.h"


typedef	struct s_global
{
	char	**env;
	char	*line_input;
}	t_global;

void initialize_history();
void save_history();


#endif