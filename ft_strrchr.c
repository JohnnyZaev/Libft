/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvarys <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:19:17 by gvarys            #+#    #+#             */
/*   Updated: 2021/10/05 16:19:18 by gvarys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*temp;
	char	*buff;

	temp = (char *)str;
	buff = NULL;
	while (*temp != '\0')
	{
		if (*temp == (char)c)
			buff = temp;
		temp++;
	}
	if (*temp == (char)c)
		buff = temp;
	return (buff);
}
