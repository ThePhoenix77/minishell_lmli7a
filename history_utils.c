/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   history_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: eaboudi <eaboudi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:34:29 by eaboudi           #+#    #+#             */
/*   Updated: 2024/07/21 11:35:45 by eaboudi          ###   ########.fr       */
=======
/*   By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:02:49 by tboussad          #+#    #+#             */
/*   Updated: 2024/07/21 11:03:36 by tboussad         ###   ########.fr       */
>>>>>>> f164d31887c3eaaacf7f401151741feeaa024d62
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

<<<<<<< HEAD
#include "minishell.h"

=======
>>>>>>> f164d31887c3eaaacf7f401151741feeaa024d62
void initialize_history()
{
    using_history();
    read_history(HISTORY_FILE);
}

void save_history()
{
    write_history(HISTORY_FILE);
}