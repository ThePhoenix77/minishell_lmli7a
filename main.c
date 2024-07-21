/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:06:33 by eaboudi           #+#    #+#             */
/*   Updated: 2024/07/21 11:26:25 by eaboudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	get_input(t_global	*global)
{
	global->line_input = NULL;
		
	while (1)
	{
		global->line_input = readline("minishell-1.0$ ");
		if (global->line_input[0] == '#')
			continue;
		if (global->line_input == NULL)
			break ;
	}
}



int main(int argc, char **argv, char	**env)
{
	t_global	global;
	
	if (argc != 1)
		return (printf("Wrong number of arguments\n"));
	global.env = env;
	get_input(&global);
}