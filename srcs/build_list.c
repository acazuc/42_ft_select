/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 11:10:40 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 16:39:24 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

static int	get_color(char *file)
{
	struct stat	file_stat;
	int			color;

	if (lstat(file, &file_stat) == -1)
		return (37);
	if (S_ISDIR(file_stat.st_mode))
		color = 134;
	else if (S_ISBLK(file_stat.st_mode))
		color = 136;
	else if (S_ISSOCK(file_stat.st_mode))
		color = 132;
	else if (S_ISCHR(file_stat.st_mode))
		color = 133;
	else if (S_ISLNK(file_stat.st_mode))
		color = 135;
	else if (!access(file, X_OK))
		color = 131;
	else
		color = 137;
	return (color);
}

void		build_list(t_env *env, int ac, char **av)
{
	t_item		*new;
	int			color;
	int			i;

	i = 1;
	while (i < ac)
	{
		new = item_create();
		new->name = av[i];
		color = get_color(new->name);
		new->color = color % 100;
		new->is_bright = color > 100;
		list_push(env, new);
		i++;
	}
}
