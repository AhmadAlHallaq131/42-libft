#include "libft.h"

static int count_len(long n)
{
    int len;
    if (n <= 0)
        len = 1;
    else
        len = 0;
    while (n != 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}
char *ft_itoa(int n)
{
    long num;
    int len;
    char *str;

    num = n;
    len = count_len(num);
    str = malloc(len +1);
    if (str == NULL)
        return (NULL);
    str[len] = '\0';
    if (num < 0)
    {
        str[0] = '-';
        num = num * -1;
    }
    if(num == 0)
        str[0] = '0';
    while(num > 0)
    {
        str[--len] = (num % 10) + '0';
        num /= 10;
    }
    return(str);
}