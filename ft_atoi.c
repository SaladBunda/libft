/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:18:53 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/01/06 18:11:52 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	space(int c)
{
	if ((c >= 9 && c <= 13) || c == 32) 
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *s)
{
	int					i;
	int					sign;
	unsigned long long	number;

	i = 0;
	number = 0;
	sign = 1;
	while (space(s[i]) == 1)
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i++] == '-')
			sign = -1;
	}
	while (ft_isdigit(s[i]) == 1)
	{
		number = number * 10 +(s[i++] - 48);
		if (number > 9223372036854775807 && sign == 1)
			return (-1);
		else if (9223372036854775807 < number && sign == -1)
			return (0);
	}
	return (number * sign);
}
