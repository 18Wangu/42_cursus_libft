#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	if (c == '\0')
		return ((char *)str + i);
	while (i--)
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
	}
	return (NULL);
}
