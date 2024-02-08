/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:59:40 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/07 23:50:55 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "integer.h"

t_integer	integer_create(int value)
{
	static struct s_type	type = {
		.destroy = (void (*)(t_any))integer_destroy,
		.size = sizeof(int)
	};
	t_integer				integer;

	integer = (t_integer)new(&type);
	integer->value = value;
	return (integer);
}
