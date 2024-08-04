/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_fun.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:58:43 by eaboudi           #+#    #+#             */
/*   Updated: 2024/08/04 11:58:15 by eaboudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

char	ft_strser(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (str[i]);
		i++;
	}
	return ('\0');
}

int	ft_strlen_un_del(char *sep, char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strchr(sep, str[0]))
		return (1);
	while (str[i])
	{
		j = 0;
		while (sep[j])
		{
			if (sep[j] == str[i])
				return (i);
			j++;
		}
		i++;
	}
	return (0);
}

void	skip_ec_t(t_global *global)
{
	int	i;

	i = 0;
	printf("will skip tabs\n");
	while (global->line_input[i]  
		&& (global->line_input[i] == ' ' 
		|| global->line_input[i] == '\t'))
		i++;
	update_line(&global->line_input, i);
}
