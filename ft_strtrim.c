#include "libft.h"

int	is_charset(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s, const char *set)
{
	char	*result;
	int	length;
	int	i;
	int	j;
	int	k;

	if (!s || !set)
		return (NULL);
	i = 0;
	while (s[i] && is_charset(s[i], set))
		i++;
	j = ft_strlen(s) - 1;
	while (j >= i && is_charset(s[j], set))
		j--;
	length = j - i;
	result = malloc(sizeof(char) * length + 2);
	if (!result)
		return (NULL);
	k = 0;
	while (i <= j)
	{
		result[k] = s[i];
		k++;
		i++;
	}
	result[k] = '\0';
	return (result);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc =! 3)
		return (1);
	printf("%s\n", ft_strtrim(argv[1], argv[2]));
	return (0);
}*/
