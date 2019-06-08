#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char cb;
	size_t i;

	str = (unsigned char *)s;
	cb = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == cb)
		{
			return (str + i);
		}
		i++;
	}
	return (NULL);
}
