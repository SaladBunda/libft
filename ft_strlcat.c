/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 21:30:33 by ael-maaz          #+#    #+#             */
/*   Updated: 2023/12/16 18:30:37 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	total;

	total = ft_strlen(src) + ft_strlen(dst);
	i = ft_strlen(dst);
	if (ft_strlen(dst) >= dstsize)
		return (dstsize + ft_strlen(src));
	j = 0;
	while (src[j] != '\0' && i < (dstsize -1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (total);
}
/* int main()
{

	char h[14];
	//printf("%zu",strlcat(h,"ijbsd",15));
	printf("%zu", ft_strlcat(h,"ijbsd",15));
} */