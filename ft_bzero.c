/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:19:09 by ael-maaz          #+#    #+#             */
/*   Updated: 2023/12/05 21:00:59 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i++] = 0;
	}
}

/* int main(void)
{
	char bunda[10] = "sup fkers";
	char bunda1[10] = "sup fkers";
	ft_bzero(bunda,5);
	bzero(bunda1,5);
	printf("1%s 2%s", bunda1, bunda);
} */