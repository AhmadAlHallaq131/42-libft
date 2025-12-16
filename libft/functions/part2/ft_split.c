#include "libft.h"


static int count_word(char const *s, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i])
        {
            count++;
            while (s[i] && s[i] != c)
                i++;
        }
    }
    return (count);
}

static int word_len(char const *s, char c)
{
    int i;

    i = 0;
    while (s[i] && s[i] != c)
        i++;
    return (i);
}

static void free_all(char **result, int count)
{
    int i;

    i = 0;
    while (i < count)
        free(result[i++]);
    free(result);
}

char **ft_split(char const *s, char c)
{
    char **result;
    int i;
    int j;
    int k;

    if(s == NULL)
        return (NULL);
    result = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
    if(result == NULL)
        return (NULL);
    i = -1;
    j  = 0;
    while(++i < count_word(s, c))
    {
        while (s[j] == c)
            j++;
        result[i] = malloc(word_len(s + j, c) + 1);
        if (!result[i])
            return (free_all(result , i), NULL);
        k = 0;
        while (s[j] && s[j] != c)
            result[i][k++] = s[j++];
        result[i][k] = '\0';
    }
    return (result[i] = NULL, result);
}