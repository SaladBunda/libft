/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:25:25 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/01/06 18:12:08 by ael-maaz         ###   ########.fr       */
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
