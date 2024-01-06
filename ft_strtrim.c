/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 13:27:34 by ael-maaz          #+#    #+#             */
/*   Updated: 2024/01/06 18:14:25 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	i;
	size_t	size;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	else
		j = ft_strlen(s1) - 1;
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]) != 0)
		i++;
	while (j > i && ft_strrchr(set, s1[j]) != 0)
		j--;
	if ((int) j - i + 1 <= 0)
		size = 0;
	else
		size = j - i + 1;
	p = malloc(sizeof(char) * (size + 1));
	if (!p)
		return (NULL);
	ft_strlcpy(p, &s1[i], size + 1);
	return (p);
}
