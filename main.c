/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:06:33 by eaboudi           #+#    #+#             */
/*   Updated: 2024/07/21 13:58:07 by eaboudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void check_leaks()
{
	system("minishell leaks");
}

void	get_input(t_global	*global)
{
	global->line_input = NULL;
	// int status;
	// status = read_history(HISTORY_FILE);
	
	initialize_history();
	while (1)
	{
		global->line_input = readline("minishell-1.0$ ");
		if (global->line_input == NULL)
			break ;
		if (global->line_input != NULL)
			add_history(global->line_input);
		if (global->line_input[0] == '#')
			continue;
		free(global->line_input);
	}
}



int main(int argc, char **argv, char **env)
{
	atexit(check_leaks);
	t_global	global;
	
	if (argc != 1)
		return (printf("Wrong number of arguments\n"));
	global.env = env;
	get_input(&global);
	// save_history();
	return (0);
}