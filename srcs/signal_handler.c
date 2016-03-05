/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 12:02:40 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 11:17:46 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	signal_handler(int signal)
{
	if (signal == SIGINT)
 	   error_quit("SIGINT");
	else if (signal == SIGKILL)
 	   error_quit("SIGKILL");
	else if (signal == SIGSEGV)
		error_quit("SIGSEGV");
	else if (signal == SIGFPE)
		error_quit("SIGFPE");
	else if (signal == SIGBUS)
		error_quit("SIGBUS");
}
