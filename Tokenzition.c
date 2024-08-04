/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tokenzition.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:03:32 by eaboudi           #+#    #+#             */
/*   Updated: 2024/08/04 13:58:13 by eaboudi          ###   ########.fr       */
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

void	check_state(t_global *global)
{
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
}

void	take_opr(t_global *global)
{
	char	oper;
	
	if ((global->line_input[0] == ' ' || global->line_input[0] == '\t')
		&& global->state == GENERAL)
		skip_ec_t(global);
	if (!ft_strchr(META_CHARS,  global->line_input[0]))
		return ;
	oper = global->line_input[0];
	update_line(&global->line_input, 1);
	global->content = &oper;
	check_state(global);
	printf("22222token--->(%c)\n", global->content[0]);
	printf("22222type--->(%d)\n", global->type);
	printf("22222state--->(%d)\n", global->state);
	add_list(global);
}

char	*get_word(char **line, int len)
{
	char	*word;

	word = malloc(sizeof(char) * len + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, *line, len + 1);
	update_line(line, len);
	return (word);
}

char	*ft_get_token(t_global *global)
{
	// char	**line;
	int		len_un_sep;
	t_lst	*new;
	int		len;
	// line = &global->line_input;
	// len = ft_strlen(global->line_input);
	// while (len)
	// {
		len_un_sep = ft_strlen_un_del(META_CHARS, global->line_input);
		if (len_un_sep)
		{
			if (!ft_strchr(META_CHARS, global->line_input[0]))
			{
				global->content = get_word(&global->line_input, len_un_sep);
				// add_list(global);
				take_opr(global);
			}
			else
				take_opr(global);	
		}
		else if (len_un_sep == 0)
		{
			global->content = ft_strdup(global->line_input);;
			// add_list(global);
		}
		// len = ft_strlen(global->line_input);
		free(global->line_input);
		printf("(%s)\n", global->line_input);
		// free_lst(&global->head);
	return (NULL);
}
