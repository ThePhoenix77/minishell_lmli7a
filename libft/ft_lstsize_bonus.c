/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:45:00 by eaboudi           #+#    #+#             */
/*   Updated: 2023/11/17 09:09:37 by eaboudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		cnt;

	if (lst == NULL)
		return (0);
	cnt = 0;
	ptr = lst;
	while (ptr != NULL)
	{
		cnt++;
		ptr = ptr -> next;
	}
	return (cnt);
}
