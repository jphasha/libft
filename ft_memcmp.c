#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ps1;
	unsigned char *ps2;
	size_t s1it;
	size_t s2it;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	s1it = 0;
	s2it = 0;
	
	return (ps1[s1it] - ps2[s2it]);
}
