/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moal-abe <moal-abe@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 22:55:10 by moal-abe          #+#    #+#             */
/*   Updated: 2026/09/08 23:24:30 by moal-abe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*p;
	const char	*k;

	i = 0;
	p = dest;
	k = src;
	while (i < n)
	{
		p[i] = k[i];
		i++;
	}
	return (dest);
}
