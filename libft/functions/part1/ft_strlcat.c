#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  dlen;
    size_t  slen;
    size_t  i;

    slen = ft_strlen(src);
    dlen = 0;
    while (dlen < dstsize && dst && dst[dlen])
        dlen++;

    if (dlen == dstsize)
        return (dstsize + slen);

    i = 0;
    while (src[i] && (dlen + i + 1) < dstsize)
    {
        dst[dlen + i] = src[i];
        i++;
    }
    if (dstsize > 0)
        dst[dlen + i] = '\0';
    return (dlen + slen);
}
