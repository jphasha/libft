#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned char *pdst;
	unsigned char *psrc;
	unsigned char oc;
	size_t dstit;
	size_t srcit;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	oc = c;
	dstit = 0;
	srcit = 0;
	while (pdst[dstit])
	{
		if (psrc[srcit] && srcit < n && dstit < n)
		{
			if (pdst[dstit] == oc)
			{
				return (dst);
			}
			pdst[dstit] = psrc[srcit];
		}
		dstit++;
		srcit++;
	}
	pdst[dstit] = '\0';
	return (dst);
}
