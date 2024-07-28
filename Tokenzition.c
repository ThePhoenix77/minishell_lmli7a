/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tokenzition.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:03:32 by eaboudi           #+#    #+#             */
/*   Updated: 2024/07/26 12:31:47 by eaboudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

// t_type	check_which_meta_char(char c, char *meta_chars)
// {
// 	int i;

// 	i = 0;
// 	while (meta_chars[i] && meta_chars[i] != c)
// 		i++;
// 	return (c);
// }


// void	ft_tokeniz(t_global *global)
// {
// 	int		i;
// 	// char	*line;
// 	char	*meta_chars;
// 	char 	*set1;
// 	char	*set2;
// 	t_lst	*new;
// 	char	*content;

// 	i = 0;
// 	meta_chars = "\t\n\'\" |<>";
// 	set1 = global->line_input;
// 	set2 = global->line_input;
// 	while (*set1 && set2[j])
// 	{
// 		if (ft_strser(meta_chars, set2))
// 		{
// 			content = ft_substr(set2, j - 1, j
// 			new = new_node();
// 		}
// 	}
// }


int	ft_strlen_mine(char c, char *str)
{
	int i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}


void	ft_tokeniz(t_global *global)
{
	char *content;
	int len_un_meta;
	char *meta_chars = " \t\n\'\"><|";
	int i = 0;
	char fr_meta_char = '\0';
	char *save_line = global->line_input;
	t_lst *new;
	int j = 0;
	char *set1 = save_line;
	char *set2 = save_line;
	while(save_line[i])
	{
		fr_meta_char = ft_strser(meta_chars, save_line[i]);
		if (fr_meta_char != '\0')
		{
			content = ft_get_token(&save_line, i);
			printf("word :%s\n", content);
			printf("line :%s\n", global->line_input);
			// i = 0;
			exit(0);
		}
		i++;
	}
}