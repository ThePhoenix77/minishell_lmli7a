/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_fun.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:03:44 by eaboudi           #+#    #+#             */
/*   Updated: 2024/07/26 11:44:49 by eaboudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_lst   *new_node(char *content, t_type type, t_state state)
{
    t_lst *new;

    new = malloc(sizeof(t_lst));
    if (new == NULL)
        return (NULL);
    new->next = NULL;
    new->prev = NULL;
    new->content = content;
	new->type = type;
	new->state = state;
    new->len = ft_strlen(content);
}

bool   add_back(t_lst **head, t_lst  **new)
{
    if (*new == NULL)
        return (Failure);
    if (*head == NULL)
    {
        (*new)->next = *new;
        (*new)->prev = *new;
        *head = *new; 
    }
    else 
    {
        (*new)->next = (*head);
        (*new)->prev = (*head)->prev;
        (*head)->prev->next = *new;
        (*head)->prev = *new;
    }
    return (Success);
}