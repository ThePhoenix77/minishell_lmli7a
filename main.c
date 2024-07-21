/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:06:33 by eaboudi           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/07/21 13:58:07 by eaboudi          ###   ########.fr       */
=======
/*   Updated: 2024/07/21 11:25:50 by tboussad         ###   ########.fr       */
>>>>>>> f164d31887c3eaaacf7f401151741feeaa024d62
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
<<<<<<< HEAD
	// int status;
	// status = read_history(HISTORY_FILE);
=======
	initialize_history();
>>>>>>> f164d31887c3eaaacf7f401151741feeaa024d62
	
	initialize_history();
	while (1)
	{
		global->line_input = readline("minishell-1.0$ ");
		if (global->line_input == NULL)
			break ;
<<<<<<< HEAD
		if (global->line_input != NULL)
			add_history(global->line_input);
		if (global->line_input[0] == '#')
			continue;
=======
		if (global->line_input[0] != '\0')
		{
            add_history(ft_strjoin("input : ", global->line_input));
        }
>>>>>>> f164d31887c3eaaacf7f401151741feeaa024d62
		free(global->line_input);
	}
}



<<<<<<< HEAD
int main(int argc, char **argv, char **env)
{
	atexit(check_leaks);
=======
int main(int argc, char **argv, char	**env)
{
	if (argc != 1)
	{
		printf("No arguments are allowed !\n");
		return (0);
	}
>>>>>>> f164d31887c3eaaacf7f401151741feeaa024d62
	t_global	global;
	
	if (argc != 1)
		return (printf("Wrong number of arguments\n"));
	global.env = env;
	get_input(&global);
<<<<<<< HEAD
	// save_history();
=======
	save_history();
>>>>>>> f164d31887c3eaaacf7f401151741feeaa024d62
	return (0);
}