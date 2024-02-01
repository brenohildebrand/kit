/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_build.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:57:43 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/01 16:07:32 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_string	string_build(t_i8 *value)
{
	t_string	s;

	s = string_create();
	string_init(s, value);
	return (s);
}
