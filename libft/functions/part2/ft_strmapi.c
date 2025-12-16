#include "libft.h"

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    size_t i;
    size_t len;
    char *str;

    
    if (s == NULL || f == NULL)
        return (NULL);
    len = ft_strlen(s);
    str = malloc(len+1);
    if (str == NULL)
        return (NULL);
    str[len] = '\0';
    i = 0;
    while (i < len)
    {
        str[i] = f(i , s[i]);
        i++;
    }
    return (str);
}