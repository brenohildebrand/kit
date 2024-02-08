/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 20:47:31 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/07 21:25:58 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

t_any	any_create(unsigned int size)
{
	t_any	instance;

	instance = malloc(size);
	if (instance == NULL)
	{
		trillian_destroy();
		exit(1);
	}
	trillian_insert(NULL, instance);
	while (size--)
		((unsigned char *)instance)[size] = 0;
	return (instance);
}
