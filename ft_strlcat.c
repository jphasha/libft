#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t agglen;
	size_t dstit;
	size_t srcit;

	dstit = 0;
	while (dst[dstit] != '\0')
	{
		dstit++;
	}
	srcit = 0;
	while (src[srcit] != '\0' && srcit < dstsize)
	{
		srcit++;
	}
	
	return (agglen)
}
