/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:51:27 by eaboudi           #+#    #+#             */
/*   Updated: 2023/11/18 14:59:47 by eaboudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*sorc;
	unsigned char	*dest;

	sorc = (unsigned char *)src;
	dest = (unsigned char *)dst;
	if (sorc < dest)
		while (len--)
			dest[len] = sorc[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
