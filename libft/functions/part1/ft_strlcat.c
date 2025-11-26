#include "libft.h"
// xxx world 20
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t src_len;
    size_t dst_len;

    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);
    
    if (dst_len >= dstsize)
        return (src_len + dstsize);
    
    if (dstsize >= src_len + dst_len + 1)
    {
        ft_memcpy(dst + dst_len, src, src_len + 1);
    }
    else
    {
        ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
        dst[dstsize - 1] = '\0';
    }

    return (src_len + dst_len);
}