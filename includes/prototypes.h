/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 12:04:42 by acazuc            #+#    #+#             */
/*   Updated: 2016/01/20 14:57:54 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

# include "env.h"

void	signal_handler(int signal);
void	quit(void);
void	terminal_normal_mode(void);
void	terminal_catch_mode(void);
void	init_signals(void);
void	key_codes_init(t_env *env);

#endif
