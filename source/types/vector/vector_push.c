/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:15:41 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/08 13:32:42 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void	vector_push(t_vector vector, t_any value)
{
	if (vector->length + 1 > vector->max_length * (3 / 4) ||
		vector->end == vector->max_length - 1)
	{
		vector_expand(vector);
	}
	vector->content[vector->end] = value;
	vector->end++;
	vector->length++;
}
