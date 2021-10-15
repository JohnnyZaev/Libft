/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvarys <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:08:37 by gvarys            #+#    #+#             */
/*   Updated: 2021/10/05 17:08:39 by gvarys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned const char	*temp;
	size_t				i;

	temp = str;
	i = 0;
	while (i < n)
	{
		if (temp[i] == (unsigned char)c)
			return ((void *)(temp + i));
		i++;
	}
	return (NULL);
}
