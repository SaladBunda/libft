/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:22:51 by ael-maaz          #+#    #+#             */
/*   Updated: 2023/12/09 21:03:50 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	count = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (j == count - 1 && needle[j] == haystack[i + j]
				&& haystack[i + j] != '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
/* int main()
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	printf("%s\n",ft_strnstr(haystack, needle, -1));
	printf("%s",strnstr(haystack, needle, -1));
} */