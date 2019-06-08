#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *pdst;
	unsigned char *psrc;
	size_t dstit;
	size_t srcit;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	dstit = 0;
	srcit = 0;
	while (pdst[dstit])
	{
		if (psrc[srcit] && dstit < n && srcit < n)
		{
			pdst[dstit] = psrc[srcit];
		}
		dstit++;
		srcit++;
	}
	pdst[dstit] = '\0';
	return (dst);
}
