#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (0);
	i = 0;
	if (dst == NULL || src == NULL)
		return (0);
	if (dst_size == 0)
		return (ft_strlen(src));
	while (src[i] && i + 1 < dst_size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
