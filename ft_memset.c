#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr = (unsigned char *)s;

	while (n--)
	{
		*ptr = (unsigned char)c;
		ptr++;
	}
	return s;
}
