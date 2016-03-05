/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 12:04:42 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/05 17:08:57 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

# include "item.h"
# include "env.h"

void	signal_handler(int signal);
void	terminal_normal_mode(void);
void	terminal_catch_mode(void);
void	init_signals(void);
void	init_caps(t_caps *caps);
void	key_codes_init(t_env *env);
void	error_quit(char *message);
void	draw_list(t_env *env);
void	build_list(t_env *env, int ac, char **av);
t_item	*item_create(void);
void	list_push(t_env *env, t_item *item);
void	move_down(t_env *env);
void	move_up(t_env *env);
void	move_left(t_env *env);
void	move_right(t_env *env);
void	return_selected(t_env *env);
void	terminal_catch(void);
void	terminal_default(void);
void	delete_current(t_env *env);
void	free_item_list(t_item_list *list);

#endif
