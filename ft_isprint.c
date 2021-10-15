/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvarys <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:57:29 by gvarys            #+#    #+#             */
/*   Updated: 2021/10/04 12:57:33 by gvarys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int symb)
{
	if (symb >= 32 && symb <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
