#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	resultat;

	i = 0;
	resultat = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == 0))
			resultat++;
		i++;
	}
	return (resultat);
}

static void	free_tab(char **tab, int j)
{
	int	i;

	i = 0;
	while (i < j)
		free(tab[i++]);
	free(tab);
}

static char	*fill(const char *s, char c)
{
	int	i;
	int	j;
	int	deb;
	char	*resultat;

	i = 0;
	j = 0;
	while (s[i] && s[i] == c)
		i++;
	if (s[i] == 0)
		return (NULL);
	deb = i;
	while (s[i] != c && s[i])
		i++;
	resultat = malloc(sizeof(char) * (i - deb + 1));
	if (!resultat)
		return (NULL);
	while (j < (i - deb))
	{
		resultat[j] = s[deb + j];
		j++;
	}
	resultat[j] = 0;
	return (resultat);
}

char	**ft_split(const char *s, char c)
{
	int	i;
	int	j;
	char	**resultat;

	i = 0;
	j = 0;
	resultat = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!resultat)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			resultat[j] = fill(&s[i], c);
			if (!resultat[j])
				return (free_tab(resultat, j), NULL);
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	resultat[j] = NULL;
	return (resultat);
}
