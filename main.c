/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:06:33 by eaboudi           #+#    #+#             */
/*   Updated: 2024/07/21 11:25:50 by tboussad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	get_input(t_global	*global)
{
	global->line_input = NULL;
	initialize_history();
	
	while (1)
	{
		printf("\nprompt :");
		global->line_input = readline(NULL);
		printf("input : %s\n", global->line_input);
		if (global->line_input == NULL)
			break ;
		if (global->line_input[0] != '\0')
		{
            add_history(ft_strjoin("input : ", global->line_input));
        }
		free(global->line_input);
	}
}



int main(int argc, char **argv, char	**env)
{
	if (argc != 1)
	{
		printf("No arguments are allowed !\n");
		return (0);
	}
	t_global	global;
	
	global.env = env;
	get_input(&global);
	save_history();
	return (0);
}