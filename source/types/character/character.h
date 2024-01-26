/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:03:44 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/25 17:59:29 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "framework.h"

typedef char	*t_character;

t_typedata	character(void);
t_character	character_create(void);
void		character_init(t_character character, char value);
t_character	character_build(char value);
void		character_destroy(t_character character);

#endif