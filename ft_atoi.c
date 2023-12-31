/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:18:53 by ael-maaz          #+#    #+#             */
/*   Updated: 2023/12/30 22:06:08 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_space(int c)
{
	if (c == '\t' || c == '\v' || c == '\n' || c == '\r' || c == '\f' 
		|| c == ' ')
		return (1);
	else
		return (0);
}

static int	ft_boucl(const char *s, int number, int sign, int p)
{
	int	i;

	i = 0;
	while (ft_space(s[i]) == 1 && s[i] != '\0')
		i++;
	while (s[i])
	{
		if (s[i] == '-' && p++ == 0)
		{
			i++;
			p++;
			sign = -1;
		}
		else if (s[i] == '+' && p++ == 0)
			i++;
		else if (ft_isdigit(s[i]) == 1)
			number = number * 10 +(s[i++] - 48);
		else
			return (number * sign);
	}
	return (number * sign);
}

int	ft_atoi(const char *s)
{
	int	sign;
	int	number;
	int	p;

	number = 0;
	sign = 1;
	p = 0;
	return (ft_boucl(s, number, sign, p));
}

/* int main()
{
	printf("%d\n",ft_atoi("214748"));
	printf("%d",atoi("214748"));
} */