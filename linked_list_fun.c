#include "minishell.h"

t_lst   *new_node(int i)
{
    t_lst *new;

    new = malloc(sizeof(t_lst));
    if (new == NULL)
        return (NULL);
    new->next = NULL;
    new->prev = NULL;
    new->type = -1;
    new->c = i;
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