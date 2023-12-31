/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:37:16 by ael-maaz          #+#    #+#             */
/*   Updated: 2023/12/07 21:24:29 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i++] = (unsigned char) c; 
	}
	return (b);
}

/* int main() {

    int a = 2018;
	int *p = &a;
	int b = 2018;
	memset(p,0,2);
	memset(p,57,1);
    ft_memset(&b,0,2);
    ft_memset(&b,57,1);
    printf("%d %d",a,b);
    return 0;
} */