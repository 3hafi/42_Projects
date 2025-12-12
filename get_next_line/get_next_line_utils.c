#include "get_next_line.h"

size_t ft_strlen(const char *s)
{
    size_t len;
    len = 0;
    while (s[len])
        len++;
    return len;
}

char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char)c)
            return (char *)s;
        s++;
    }
    if (c == '\0')
        return (char *)s;
    return NULL;
}

char *ft_strjoin(char *s1, char *s2)
{
    size_t  len1;
    size_t  len2;
    char *new_str;
    size_t i;
    size_t j;

    if (!s1)
    {
        s1 = (char *)malloc(1);
        if (!s1)
            return NULL;
        s1[0] = '\0';
    }
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    new_str = (char *)malloc(len1 + len2 + 1);
    if (!new_str)
        return NULL;
    i = 0;
    while (i < len1)
    {
        new_str[i] = s1[i];
        i++;
    }
    j = 0;
    while (j < len2)
        new_str[i++] = s2[j++];
    new_str[i] = '\0';
    free(s1);
    return new_str;
}
