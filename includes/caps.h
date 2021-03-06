/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caps.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 15:36:16 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 13:36:05 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAPS_H
# define CAPS_H

typedef struct	s_caps
{
	char		*underline_start;
	char		*underline_end;
	char		*highlight_start;
	char		*highlight_end;
	char		*bold_start;
	char		*bold_end;
	char		*clear;
	char		*move;
}				t_caps;

#endif
