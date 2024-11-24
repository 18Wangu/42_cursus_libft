#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	unsigned char	*ptr = (unsigned char *)s;

	while (len--)
		*ptr++ = 0;
}
