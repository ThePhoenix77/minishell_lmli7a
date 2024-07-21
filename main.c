/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:06:33 by eaboudi           #+#    #+#             */
/*   Updated: 2024/07/21 10:07:34 by eaboudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	get_input(t_global	*global)
{
	global->line_input = NULL;
	
	while (1)
	{
		printf("\nprompt :");
		global->line_input = readline(NULL);
		printf("input : %s\n", global->line_input);
		if (global->line_input == NULL)
			break ;
	}
}



int main(int arc, char *arv[], char	*env[])
{
	t_global	global;
	
	global.env = env;
	get_input(&global);
}