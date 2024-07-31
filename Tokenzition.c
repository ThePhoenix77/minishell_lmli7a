/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tokenzition.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:03:32 by eaboudi           #+#    #+#             */
/*   Updated: 2024/07/31 11:24:46 by eaboudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	update_line(char **line, int len_skip)
{
	char *save;

	save = ft_strdup (*line + len_skip);
	free(*line);
	*line = save;
	save = NULL;
}

void	add_list(t_global *global)
{
	t_lst	*new;

	new = new_node();
	new->content = global->content;
	new->state = global->state;
	new->type = global->type;
	new->len = ft_strlen(global->content);
	add_back(&global->head, &new);
	global->content = NULL;
}

void	take_opr(t_global *global)
{
	global->content = malloc(2);
	if (!global)
		return ((void)NULL);
	global->content[0] = global->line_input[0];
	global->content[1] = '\0';
	global->type = global->content[0];
	if (global->type == DOUBLE_QUOTE)
	{
		if (global->state == GENERAL)
			global->state = IN_DQUOTE;
		else if (global->state == IN_DQUOTE)
			global->state = GENERAL;
	}
	if (global->type == SINGEL_QOUTE)
	{
		if (global->state == GENERAL)
			global->state = IN_SQUOTE;
		else if (global->state == IN_SQUOTE)
			global->state = GENERAL;
	}
	add_list(global);
	update_line(&global->line_input, 1);
}
	

char	*ft_get_token(t_global *global)
{
	char	**line;
	int		len_un_sep;
	t_lst	*new;
	
	line = &global->line_input;
	// while (*line)
	// {
		len_un_sep = ft_strlen_un_del(META_CHARS, *line);
		global->content = malloc(sizeof(char) * len_un_sep);
		ft_strlcpy(global->content, *line, len_un_sep + 1);
		add_list(global);
		update_line(line, len_un_sep);
		take_opr(global);
		int i = 0;
		while (i <= 2)
		{
			// printf("line ---->%s\n", global->line_input);
			printf("content =====>%s\n", global->head->content);
			global->head = global->head->next;
			i++;
		}	
		free_lst(&global->head);
		
	// }
	return (NULL);
}



