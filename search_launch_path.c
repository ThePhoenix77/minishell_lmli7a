/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_launch_path.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:59:26 by eaboudi           #+#    #+#             */
/*   Updated: 2024/07/21 14:03:18 by eaboudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*get_path(t_global *global)
{
	int	i;
	
	i = 0;
	while (1)
	{
		if (!ft_strncmp(global->env[i], "PATH=", 5))
			
	}
}