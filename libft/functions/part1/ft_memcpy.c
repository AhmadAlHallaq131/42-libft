#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    
    i = 0;
    if(!dst && !src)
    {
        return (NULL);
    }

    while (i < n)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i++];
    }
    return (dest);
}