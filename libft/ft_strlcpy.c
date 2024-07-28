#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	int		i;

	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (srcsize);
	if (dstsize > 0)
	{
		while (dstsize > 0 && src[i])
		{
			dst[i] = src[i];
			i++;
			dstsize--;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}
