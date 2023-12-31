/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:37:11 by ael-maaz          #+#    #+#             */
/*   Updated: 2023/12/10 11:16:42 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i]; 
		i++;
	}
	return (dst);
}

/* int main(void)
{
	char tab[10]="hello";
	char leau[10]= "bunda";
	char bunda[10];
	printf("%s " , ft_memcpy(bunda, leau,19) ,memcpy(bunda,leau,11));
} */