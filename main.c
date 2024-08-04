/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:06:33 by eaboudi           #+#    #+#             */
/*   Updated: 2024/08/04 11:44:47 by eaboudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void check_leaks()
{
	system("leaks minishell");
}

void	get_line(t_global *global)
{
	read_history(HISTORY_FILE);
	while (1)
	{
		global->line_input = readline("minishell-1.0$ ");
		if (!global->line_input)
			break ;
		add_history(global->line_input);
		ft_get_token(global);
	}
	write_history(HISTORY_FILE);
}

int main(int argc, char **argv, char **env)
{
	atexit(check_leaks);
	
	if (argc != 1)
		return (printf("Wrong number of arguments\n"));
	t_global	global;

	global.env = env;
	global.state = GENERAL;
	get_line(&global);
	return (0);
}