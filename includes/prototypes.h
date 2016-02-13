/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 12:04:42 by acazuc            #+#    #+#             */
/*   Updated: 2016/02/13 16:19:31 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

# include "env.h"

void	signal_handler(int signal);
void	terminal_normal_mode(void);
void	terminal_catch_mode(void);
void	init_signals(void);
void	init_caps(t_caps *caps);
void	key_codes_init(t_env *env);
void	error_quit(char *message);

#endif
