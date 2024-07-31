/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_fun.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:03:44 by eaboudi           #+#    #+#             */
/*   Updated: 2024/07/31 10:27:38 by eaboudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_lst   *new_node(void)
{
    t_lst *new;

    new = malloc(sizeof(t_lst));
    if (new == NULL)
        return (NULL);
    new->next = NULL;
    new->prev = NULL;
    new->content = NULL;
	new->type = -1;
	new->state = 0;
    new->len = 0;
	return (new);
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
        (*new)->next = *head;
        (*new)->prev = (*head)->prev;
        (*head)->prev->next = *new;
        (*head)->prev = *new;
    }
    return (Success);
}


void	free_lst(t_lst	**head)
{
	t_lst *current;
	t_lst *next_node;

	if (head == NULL || *head == NULL)
        return;
	current = *head;
	(*head)->prev->next = NULL;
	while (current != NULL) 
	{
        next_node = current->next;
        free(current->content);
		free(current);
        current = next_node;
    }
	*head = NULL;
}