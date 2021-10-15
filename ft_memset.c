/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvarys <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:40:04 by gvarys            #+#    #+#             */
/*   Updated: 2021/10/04 13:40:06 by gvarys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destination, int c, size_t count)
{
	unsigned char	*buf;

	buf = destination;
	while (count > 0)
	{
		*buf = c;
		buf++;
		count--;
	}
	return (destination);
}
