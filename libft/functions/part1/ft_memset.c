#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char *temp;
    temp = (unsigned char *)b;
    while (len > 0)
    {
        *temp = (unsigned char)c;
        temp++;
        len--;
    }
    return b;
}

int main(void)
{
    char str[] = "Hello, World!";
    ft_memset(str, 'X', 5);
    printf("%s\n", str);
    return 0;
}