/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 21:01:22 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/01/06 18:13:04 by ael-maaz         ###   ########.fr       */
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
	if (srcc == dstc)
		return (dstc);
	if (srcc < dstc)
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
