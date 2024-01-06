/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:49:24 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/01/06 18:12:22 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ncount(long n)
{
	int	i;

	if (n == 0)
		i = 1;
	else
		i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*allocate(int *n, long *i)
{
	char	*str;

	if ((*n) < 0)
	{
		str = (char *)malloc(((*i) + 2) * sizeof(char));
		(*i)++;
	}
	else
		str = (char *)malloc(((*i) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	long	i;
	long	cpy;
	char	*str;

	cpy = n;
	if (n < 0)
		cpy = (long)n * (-1);
	i = ncount(cpy);
	str = allocate(&n, &i);
	if (!str)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	str[i] = '\0';
	while (cpy > 0)
	{
		str[i-- - 1] = (cpy % 10) + 48;
		cpy /= 10; 
	}
	return (str);
}
