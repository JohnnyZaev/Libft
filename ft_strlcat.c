/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvarys <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:43:29 by gvarys            #+#    #+#             */
/*   Updated: 2021/10/05 12:43:30 by gvarys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		dlen;
	size_t		ts;

	d = dst;
	s = src;
	ts = size;
	while (ts-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	ts = size - dlen;
	if (ts == 0)
		return (dlen + ft_strlen(src));
	while (*s != '\0')
	{
		if (ts != 1)
		{
			*d++ = *s;
			ts--;
		}
		s++;
	}
	*d = '\0';
	return (ft_strlen(src) + dlen);
}
