/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   history_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:34:29 by eaboudi           #+#    #+#             */
/*   Updated: 2024/07/21 11:35:45 by eaboudi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

#include "minishell.h"

void initialize_history()
{
    using_history();
    read_history(HISTORY_FILE);
}

void save_history()
{
    write_history(HISTORY_FILE);
}