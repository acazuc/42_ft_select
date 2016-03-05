/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_quit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:32:12 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 13:32:39 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	error_quit(char *error_message)
{
	terminal_default();
	if (error_message)
	{
		ft_putstr_fd("\033[91mAn error happened: ", 2);
		ft_putendl_fd(error_message, 2);
		ft_putstr_fd("\033[0m", 2);
	}
	exit(-1);
}
