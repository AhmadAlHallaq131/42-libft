#include "libft.h"

static int trim(const char *set ,char c)
{
    int i;
    i = 0;
    while(set[i])
    {
        if(c == set[i])
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(const char *s1, const char *set)
{
    size_t start;
    size_t end;

    if(s1 == NULL || set == NULL)
        return (NULL);
    
    start = 0;
    while (s1[start] && trim(set, s1[start]))
        start++;
    end = ft_strlen(s1);
    while (end > start && trim(set, s1[end - 1]))
        end--;
    return (ft_substr(s1,start, end - start));
}