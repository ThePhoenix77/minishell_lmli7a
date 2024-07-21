/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:29:25 by eaboudi           #+#    #+#             */
/*   Updated: 2023/11/03 19:49:09 by eaboudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			ch;
	char			*str;
	size_t			i;

	ch = (char)c;
	str = (char *)s;
	i = 0;
	while (i < n)
	{
		if (*(str + i) == ch)
			return (str + i);
		i++;
	}
	return (0);
}
/*int main()
{
	printf("%s\t%s\n", ft_memchr("hSSIAn", 65, 5), memchr("hSSIAn", 65, 5));
}*/