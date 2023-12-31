/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:01:22 by ael-maaz          #+#    #+#             */
/*   Updated: 2023/12/10 11:30:29 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstc;
	unsigned char	*srcc;

	if (!dst && !src)
		return (NULL);
	dstc = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	if (srcc <= dstc)
	{
		while (len > 0)
		{
			dstc[len - 1] = srcc[len - 1];
			len--;
		}
		return (dstc);
	}
	else
		ft_memcpy(dstc, srcc, len);
	return (dstc);
}
/*  int main()
{
	int a[] = {9,1,7,2,7,9};
	int b[] = {9,1,7,2,7,9};
	ft_memmove(&a[0],&a[0],3);
	memmove(&b[0],&b[0],3);
	for (int i = 0; i< 6;i++)
		printf("%d %d\n", a[i],b[i]);
}  */