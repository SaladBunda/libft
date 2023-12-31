/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maaz <ael-maaz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:02:02 by ael-maaz          #+#    #+#             */
/*   Updated: 2023/12/16 11:40:46 by ael-maaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_c(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str && str[i] == c && str[i])
		i++;
	while (str && str[i])
	{
		count++;
		while (str[i] != c && str[i])
			i++;
		while (str[i] == c && str[i])
			i++;
	}
	return (count);
}

static char	**ft_free(char **tab, int j)
{
	while (j >= 0)
		free(tab[j--]);
	free(tab);
	return (NULL);
}

static int	ft_char_c(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static char	*ft_strdup_i(const char *s1, char c, int *index)
{
	char	*p;
	int		i;
	int		j;
	int		word_size;

	j = 0;
	i = *index;
	word_size = ft_char_c((char *)&s1[i], c);
	p = (char *)malloc(sizeof(char) * (word_size + 1));
	if (!p)
		return (NULL);
	ft_memcpy(p, (char *)s1 + i, (size_t)word_size);
	while (j < word_size)
	{
		j++;
		(*index)++;
	}
	p[word_size] = '\0';
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		j;
	int		i;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * (ft_word_c((char *)s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && j < ft_word_c((char *)s, c))
	{
		tab[j] = ft_strdup_i(s, c, &i);
		if (!tab[j])
			return (ft_free(tab, j));
		j++;
		while (s[i] && s[i] == c)
			i++;
	}
	tab[ft_word_c((char *)s, c)] = NULL;
	return (tab);
}

/* int main()
{
	int i;
	char *str = "hello!";
	char **tab;

	tab = ft_split(str,' ');
	while(i<6)
		printf("%s\n", tab[i++]);
} */