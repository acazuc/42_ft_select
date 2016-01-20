/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 10:54:10 by acazuc            #+#    #+#             */
/*   Updated: 2016/01/20 11:47:23 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	raw_terminal_mode()
{
	struct termios	tattr;

	tcgetattr(0, &tattr);
	tattr.c_lflag &= ~(ECHO | ICANON);
	tattr.c_oflag &= ~(OPOST);
	tattr.c_cc[VMIN] = 1;
	tattr.c_cc[VTIME] = 0;
	tcsetattr(0, TCSADRAIN, &tattr);
}

void	default_terminal_mode()
{
	struct termios	tattr;

	tcgetattr(0, &tattr);
	tattr.c_lflag |= (ECHO | ICANON);
	tattr.c_oflag |= (OPOST);
	tcsetattr(0, TCSADRAIN, &tattr);
}

int main()
{/*
	char buf[1024];
	char buf2[30];
	char *ap = buf2;
	int		width;
	int		height;
	char	*clearstr;
	char	*gotostr;
	char	*stand_start;
	char	*stand_end;
	char	*under_start;
	char	*under_end;
	char	*grab_start;
	char	*grab_end;

	tgetent(buf, getenv("TERM"));

	grab_start = tgetstr("ks", &ap);
	grab_end = tgetstr("ke", &ap);
	clearstr = tgetstr("cl", &ap);
	gotostr = tgetstr("cm", &ap);
	stand_start = tgetstr("so", &ap);
	stand_end = tgetstr("se", &ap);
	under_start = tgetstr("us", &ap);
	under_end = tgetstr("ue", &ap);
	height = tgetnum("li");
	width = tgetnum("co");

	ft_putstr(clearstr);
	ft_putstr(grab_end);
	ft_putstr(tgoto(gotostr, 0, 0));
	ft_putstr("Hello, ");
	ft_putstr(under_start);
	ft_putstr("world");
	ft_putstr(under_end);
	ft_putstr(tgoto(gotostr, 30, 30));
	ft_putnbr(width);
	ft_putchar(' ');
	ft_putnbr(height);
	ft_putendl("!");
	ft_putstr(grab_start);*/
	char	buf[1024];
	char	buf2[30];
	char	*ap = buf2;
	int		running;
	int		rd;
	char	buffer[20];

	running = 1;
	raw_terminal_mode();
	tgetent(buf, getenv("TERM"));
	while (running)
	{
		ft_memset(buffer, 0, 20);
		rd = read(0, buffer, 20);
		if (rd == 1 && buffer[0] == 27)
		{
			default_terminal_mode();
			exit(1);
		}
		else if (!ft_strcmp(buffer, tgetstr("kD", &ap)))
			ft_putendl("Delete");
		else if (rd == 1 && buffer[0] == 127)
			ft_putendl("Back");
		else if (!ft_strcmp(buffer, tgetstr("kr", &ap)))
			ft_putendl("Right");
		else if (!ft_strcmp(buffer, tgetstr("ku", &ap)))
			ft_putendl("Up");
		else if (!ft_strcmp(buffer, tgetstr("kd", &ap)))
			ft_putendl("Down");
		else if (!ft_strcmp(buffer, tgetstr("kl", &ap)))
			ft_putendl("Left");
		else if (!ft_strcmp(buffer, " "))
			ft_putendl("Space");
	}
	default_terminal_mode();
}
