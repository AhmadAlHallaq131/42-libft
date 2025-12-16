#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    size_t i;
    size_t j;

    if (s1 == NULL || s2 == NULL)
    return (NULL);

    str = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
    if (str == NULL)
    return (NULL);

    i = 0;
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        str[i + j] = s2[j];
        j++;
    }
    str[i + j] = '\0';
    return (str);
}
