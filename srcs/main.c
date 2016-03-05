/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 10:54:10 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 10:16:01 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

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
