/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:25:25 by ael-maaz          #+#    #+#             */
/*   Updated: 2023/12/30 22:26:58 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if ((signed long)count < 0 || (signed long)size < 0) 
		return (NULL);
	ptr = malloc(size * (count));
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, size * (count));
	return (ptr);
}

int main()
{
	void *d = calloc(123456789,12);
	printf("%p\n",d);
	free(d);
	void *s = ft_calloc(123456789,12);
	printf("%p\n",s);
	free(s);
}