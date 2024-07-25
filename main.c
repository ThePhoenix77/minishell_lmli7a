/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:06:33 by eaboudi           #+#    #+#             */
/*   Updated: 2024/07/23 09:49:04 by tboussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void check_leaks()
{
	system("leaks minishell");
}

void	get_line_and_add_to_history(t_global *global)
{
	read_history(HISTORY_FILE);
	while (1)
	{
		global->line_input = readline("minishell-1.0$ ");
		if (!global->line_input)
			break ;
		if (global->line_input[0] == '#')
			continue;
		add_history(global->line_input);
		free(global->line_input);
	}
	write_history(HISTORY_FILE);
}

void	split_input(t_global *global)
{
	
}

int main(int argc, char **argv, char **env)
{
	// if (argc != 1)
	// 	return (printf("Wrong number of arguments\n"));
	// t_global	global;

	// global.env = env;
	// get_line_and_add_to_history(&global);
	return (0);
}