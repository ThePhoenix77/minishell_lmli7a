/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:10:36 by eaboudi           #+#    #+#             */
/*   Updated: 2023/11/13 16:06:25 by eaboudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_number_lenght(int nbr)
{
	int	cnt;

	cnt = 1;
	while (nbr / 10)
	{
		cnt++;
		nbr /= 10;
	}
	return (cnt + (nbr < 0));
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		nbr_len;
	char	*str;

	nbr = n;
	nbr_len = ft_number_lenght(nbr);
	str = (char *)ft_calloc(sizeof(char), (nbr_len + 1));
	if (!str)
		return (NULL);
	if (nbr < 0)
		nbr = -nbr;
	while (nbr_len)
	{
		str[--nbr_len] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
