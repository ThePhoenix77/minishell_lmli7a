/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 19:32:36 by eaboudi           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/07/21 11:41:37 by eaboudi          ###   ########.fr       */
=======
/*   Updated: 2024/07/21 11:05:11 by tboussad         ###   ########.fr       */
>>>>>>> f164d31887c3eaaacf7f401151741feeaa024d62
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
#define MINISHELL_H

<<<<<<< HEAD
# define Failure false
# define Success true
# define HISTORY_FILE ".my_shell_history"
=======
#define HISTORY_FILE ".my_shell_history"
>>>>>>> f164d31887c3eaaacf7f401151741feeaa024d62

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

<<<<<<< HEAD
void initialize_history();
void save_history();
=======
void	initialize_history(void);
void	save_history(void);
>>>>>>> f164d31887c3eaaacf7f401151741feeaa024d62


#endif