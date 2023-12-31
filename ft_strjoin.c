/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:07:31 by ael-maaz          #+#    #+#             */
/*   Updated: 2023/12/31 15:28:23 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	length;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	length = ft_strlen(s1) + ft_strlen(s2);
	p = (char *)malloc(sizeof(char) * (length + 1));
	if (!p)
		return (NULL);
	ft_memcpy(&p[0], s1, ft_strlen(s1));
	ft_memcpy(&p[ft_strlen(s1)], s2, ft_strlen(s2));
	p[length] = '\0';
	return (p);
}
