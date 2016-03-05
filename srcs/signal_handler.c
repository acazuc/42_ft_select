/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 12:02:40 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 18:11:20 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"
#include <sys/ioctl.h>

t_env	*g_env;

void		signal_handler(int sig)
{
	if (sig == SIGINT)
		error_quit(NULL);
	else if (sig == SIGKILL)
		error_quit(NULL);
	else if (sig == SIGSEGV)
		error_quit(NULL);
	else if (sig == SIGFPE)
		error_quit(NULL);
	else if (sig == SIGBUS)
		error_quit(NULL);
	else if (sig == SIGSTOP || sig == SIGTSTP)
	{
		signal(SIGTSTP, SIG_DFL);
		ioctl(0, TIOCSTI, "\032");
		terminal_default();
	}
	else if (sig == SIGCONT)
	{
		signal(SIGTSTP, signal_handler);
		terminal_catch();
		tgetent(0, getenv("TERM"));
		draw_list(g_env);
	}
	else if (sig == SIGWINCH)
	{
		tgetent(0, getenv("TERM"));
		draw_list(g_env);
	}
}
