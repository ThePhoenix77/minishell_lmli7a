/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_mem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 01:24:10 by eaboudi           #+#    #+#             */
/*   Updated: 2024/05/04 10:01:58 by eaboudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_mem(char **leak)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (leak[len])
		len++;
	while (i <= len)
	{
		free(leak[i]);
		i++;
	}
	free(leak);
}
