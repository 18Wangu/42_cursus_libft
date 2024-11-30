#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	dst_len;
	size_t	index;
	size_t	i;

	dst_len = ft_strlen(dst);
	index = 0;
	while (dst[index])
		index++;
	i = 0;
	while (src[i] && (i + index + 1) < dst_size)
	{
		dst[index + i] = src[i];
		i++;
	}
	if (i < dst_size)
		dst[index + i] = '\0';
	if (dst_size <= dst_len)
		return (ft_strlen(src) + dst_size);
	else
		return (ft_strlen(src) + dst_len);
}
