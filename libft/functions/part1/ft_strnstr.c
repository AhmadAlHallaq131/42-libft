#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t str_len;
    
    str_len = ft_strlen(needle);
    if (!*needle)
    {
        return ((char *)haystack);
    }

    while (*haystack && len >= str_len)
    {
        if ((ft_strncmp(haystack, needle, str_len)) == 0)
        {
            return ((char *)haystack);
        }
        haystack++;
        len--;
    }
    return (NULL);
}