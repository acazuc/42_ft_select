/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 10:54:10 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/13 16:46:40 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

/*int old_main()
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
	ft_putstr(grab_start);
	t_env	env;
	int		running;
	int		rd;
	char	buffer[20];

	init_signals();
	running = 1;
	terminal_catch_mode();
	tgetent(0, getenv("TERM"));
	key_codes_init(&env);
	int i = 0;
	while (env.key_code_right[i])
	{
		ft_putnbr(env.key_code_right[i]);
		ft_putchar(' ');
		i++;
	}
	while (42)
	{
		ft_memset(buffer, 0, 20);
		rd = read(0, buffer, 20);
		i = 0;
		while (buffer[i])
		{
			ft_putnbr(buffer[i]);
			ft_putchar(' ');
			i++;
		}
		if (rd == 1 && buffer[0] == 27)
			quit();
		else if (!ft_strcmp(buffer, env.key_code_delete))
			ft_putendl("Delete");
		else if (rd == 1 && buffer[0] == 127)
			ft_putendl("Back");
		else if (!ft_strcmp(buffer, env.key_code_right))
			ft_putendl("Right");
		else if (!ft_strcmp(buffer, env.key_code_up))
			ft_putendl("Up");
		else if (!ft_strcmp(buffer, env.key_code_down))
			ft_putendl("Down");
		else if (!ft_strcmp(buffer, env.key_code_left))
			ft_putendl("Left");
		else if (!ft_strcmp(buffer, " "))
			ft_putendl("Space");
	}
	terminal_normal_mode();
}*/

static void		read_stdin(t_env *env)
{
	char	buffer[20];
	int		rd;

	ft_memset(buffer, 0, 20);
	rd = read(0, buffer, 20);
	if (rd == 1 && buffer[0] == 27)
		error_quit(NULL);
	else if (rd == 1 && buffer[0] == ' ')
		ft_putendl("space");
	else if (!ft_strcmp(buffer, env->key_code_right))
	{
		if (env->position == env->list_size - 1)
			env->position = 0;
		else
			env->position++;
	}
	else if (!ft_strcmp(buffer, env->key_code_left))
	{
		if (env->position == 0)
			env->position = env->list_size - 1;
		else
			env->position--;
	}
	draw_list(env);
}

int				main(int ac, char **av)
{
	t_env	*env;

	if (!(env = malloc(sizeof(*env))))
		error_quit("Failed to malloc env");
	env->position = 0;
	env->list_size = ac;
	env->list = av;
	init_signals();
	tgetent(0, getenv("TERM"));
	if (!(env->caps = malloc(sizeof(*env->caps))))
		error_quit("Failed to malloc env caps");
	init_caps(env->caps);
	key_codes_init(env);
	terminal_catch_mode();
	ft_putendl(env->caps->fullscreen_start);
	while (1)
	{
		read_stdin(env);
	}
	(void)ac;
	(void)av;
}
