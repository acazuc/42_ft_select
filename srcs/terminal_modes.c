/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   terminal_modes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 12:06:48 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 17:56:12 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	terminal_normal_mode(void)
{
	struct termios	attr;

	tcgetattr(0, &attr);
	attr.c_lflag |= (ECHO | ICANON);
	attr.c_oflag |= OPOST;
	tcsetattr(0, 0, &attr);
}

void	terminal_catch_mode(void)
{
	struct termios	attr;

	tcgetattr(0, &attr);
	attr.c_lflag &= ~(ECHO | ICANON);
	attr.c_oflag &= ~OPOST;
	tcsetattr(0, 0, &attr);
}
