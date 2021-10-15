/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvarys <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:06:50 by gvarys            #+#    #+#             */
/*   Updated: 2021/10/04 15:06:52 by gvarys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *destination, size_t count)
{
	unsigned char	*buf;

	buf = (unsigned char *)destination;
	while (count > 0)
	{
		*buf = '\0';
		buf++;
		count--;
	}
}
