/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moal-abe <moal-abe@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 00:11:36 by moal-abe          #+#    #+#             */
/*   Updated: 2026/09/16 20:27:31 by moal-abe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*p;
	const char	*k;

	p = dst;
	k = src;
	if (p > k)
	{
		while (len)
		{
			len--;
			p[len] = k[len];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			p[i] = k[i];
			i++;
		}
	}
	return (dst);
}
