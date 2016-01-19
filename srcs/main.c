/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 10:54:10 by acazuc            #+#    #+#             */
/*   Updated: 2016/01/19 11:45:48 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

int main()
{
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

	tgetent(buf, getenv("TERM"));

	clearstr = tgetstr("cl", &ap);
	gotostr = tgetstr("cm", &ap);
	stand_start = tgetstr("so", &ap);
	stand_end = tgetstr("se", &ap);
	under_start = tgetstr("us", &ap);
	under_end = tgetstr("ue", &ap);
	height = tgetnum("li");
	width = tgetnum("co");

	ft_putstr(clearstr);
	ft_putstr(tgoto(gotostr, 0, 0));
	ft_putstr("Hello, ");
	ft_putstr(under_start);
	ft_putstr("world");
	ft_putstr(under_end);
	ft_putstr(tgoto(gotostr, 10, 10));
	ft_putnbr(width);
	ft_putchar(' ');
	ft_putnbr(height);
	ft_putendl("!");
}
