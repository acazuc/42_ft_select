/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 11:10:40 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 17:11:28 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

static int	get_color(char *file)
{
	struct stat	file_stat;

	if (lstat(file, &file_stat) == -1)
		return (137);
	if (S_ISDIR(file_stat.st_mode))
		return (134);
	else if (S_ISBLK(file_stat.st_mode))
		return (136);
	else if (S_ISCHR(file_stat.st_mode))
		return (133);
	else if (S_ISLNK(file_stat.st_mode))
		return (135);
	else if (!access(file, X_OK))
		return (131);
	return (132);
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
		new->is_bright = color > 100 ? 1 : 0;
		list_push(env, new);
		i++;
	}
}
