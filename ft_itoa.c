/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moal-abe <moal-abe@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 15:39:53 by moal-abe          #+#    #+#             */
/*   Updated: 2026/09/22 20:14:27 by moal-abe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_digits(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	fill_number(char *result, long n, int len)
{
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	while (n)
	{
		len--;
		result[len] = (n % 10) + '0';
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;
	long	num;

	num = n;
	len = count_digits(num);
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	if (num == 0)
		result[0] = '0';
	else
		fill_number(result, num, len);
	return (result);
}
