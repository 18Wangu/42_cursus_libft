#include "libft.h"

int	is_charset(char c1, char c2)
{
	if (c1 == c2)
		return (1);
	else
		return (0);
}

int	count_word(const char *str, char c)
{
	int	i;
	int	nb_word;

	i = 0;
	nb_word = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], c))
			i++;
		while (str[i] && !is_charset(str[i], c))
			nb_word++;
		while (str[i] && is_charset(str[i], c))
			i++;
	}
	return (nb_word);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int	i;
	int	j;
	int	length;

	tab = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		length = 0;
		while (*s != '\0' && is_charset(*s, c))
			s++;
		while (s[length] != '\0' && !is_charset(*s, c))
			length++;
		tab[i] = malloc(sizeof(char) * (length + 1));
		j = 0;
		while (j < length)
		{
			tab[i][j] = *s;
			j++;
			s++;
		}
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
