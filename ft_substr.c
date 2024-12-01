#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	unsigned int	i;

	if (start >= (unsigned int)ft_strlen(s))
		len = 0;
	else if (len > (size_t)ft_strlen(s + start))
		len = ft_strlen(s + start);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (start + i < (unsigned int)ft_strlen(s) && i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
