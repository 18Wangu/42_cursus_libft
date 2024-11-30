#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*result;
	size_t	i;

	result = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
