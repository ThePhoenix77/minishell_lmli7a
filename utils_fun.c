/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_fun.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:58:43 by eaboudi           #+#    #+#             */
/*   Updated: 2024/07/30 14:00:23 by eaboudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"


char		ft_strser(char *str, char c)
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
char *update_line(char *line, int len_skip)
{
	char *save_line;
	int i;

	i = 0;
	save_line = line;
	while (i <= len_skip)
	{
		line++;
		i++;
	}
	line = ft_strdup(line);
	free(save_line);
	return line;
}

char	*ft_get_token(t_global *global)
{
	char	delm;
	char	*content;
	char	**line;
	int i;

	i = 0;
	line = &global->line_input;
	global->status = 2;
	global->type = -1;
	delm = '\0';
	while (line[0][i])
	{
		if (line[0][i] != '\0')
			delm = ft_strser(META_CHARS, line[0][i]);
		if (delm != '\0')
		{
			content = malloc(i + 1);
			if (!content)
				return (NULL);
			ft_strlcpy(content, *line, i);
			*line = update_line(*line, i);
			// if (ft_strchr(META_CHARS, line[0][i]))
			// {
			// 	i++;
			// }	
			printf("content ---->%s\n\n", content);
			printf("opera ---->'%c'\n\n", delm);
			printf("line ---->%s\n\n", global->line_input);
			i = 0;
			delm = '\0';
		}
		i++;
	}
	// printf("----->%s\n", *line);
	return (NULL);
}


// void	add_to_list(t_global *global, char *content)
// {
// 	t_lst	*new;

// 	new = new_node(content, )
// }