/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 12:29:25 by eaboudi           #+#    #+#             */
/*   Updated: 2024/07/26 12:29:26 by eaboudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*copy;
	char	*cp;

	size = ft_strlen(s1);
	copy = (char *)malloc(size + 1);
	if (copy == NULL)
		return (NULL);
	cp = copy;
	while (*s1)
	{
		*copy++ = *s1++;
	}
	*copy = '\0';
	return (cp);
}
