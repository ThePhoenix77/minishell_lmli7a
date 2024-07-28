/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_fun.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 11:58:43 by eaboudi           #+#    #+#             */
/*   Updated: 2024/07/26 12:28:34 by eaboudi          ###   ########.fr       */
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
bool update_line(char *line, int len)
{
	char *old_line;
	int		old_len;

	old_line = line;
	old_len = ft_strlen(old_line);
	char *upd_line;
	upd_line = line + len;
	upd_line = ft_strdup(upd_line);
	free(line);
	line = upd_line;

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
	update_line(*line, len);
	return (ret);
}