/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_fun.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:58:43 by eaboudi           #+#    #+#             */
/*   Updated: 2024/07/29 17:38:14 by eaboudi          ###   ########.fr       */
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
char *update_line(char *line, int len)
{
	char *old_line;
	int		old_len;

	old_line = line;
	old_len = ft_strlen(old_line);
	printf("---> old line :%s\n", old_line);
	printf("---> old len :%d\n", old_len);
	
	char *upd_line;
	upd_line = ft_substr(line, len, old_len - len);
	printf("updated line --->%s\n", upd_line);
	return (upd_line);
}

char	*ft_get_token(char **line, int len)
{
	char *ret;
	int i;

	ret = malloc(sizeof(char) * len + 1);
	if (!ret)
		return (NULL);
	i = 0;
	ft_strlcpy(ret, *line, len + 1);
	*line = update_line(*line, len);
	return (ret);
}