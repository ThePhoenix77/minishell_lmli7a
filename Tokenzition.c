/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tokenzition.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:03:32 by eaboudi           #+#    #+#             */
/*   Updated: 2024/07/30 13:18:41 by eaboudi          ###   ########.fr       */
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

void	print_list(t_lst *head)
{
	while (1)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
}
void	ft_tokeniz(t_global *global)
{
	
	ft_get_token(global);
}


// void	build_list(t_global *global, char *content, t_type )
// {
// 	t_list	*new;
	
// 	new = new_node(content, )	
// }
