#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{

    unsigned char *temp;
    size_t i;
    temp = malloc(count * size);
    i = 0;
    if (temp == NULL)
    {
        return (NULL);
    }
    while (i < count * size)
    {
        temp[i] = 0;
        i++;
    }
    return (temp);
}