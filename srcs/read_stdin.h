/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdin.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 15:53:45 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/13 15:57:13 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"

void	read_stdin(t_env *env)
{
	char	buffer[20];

	ft_memset(buffer, 0, 20);
	rd = reead(0, buffer, 20);
	i = 0;
	while (buffer[i])
	{
		ft_putnbr(buffer[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
	if (rd == 1 && buffer[0] == 27)
		error_quit(NULL);
}
