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

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (str == NULL)
		return (free(s1), NULL);
	i = -1;
	j = 0;
	if (s1)
		while (s1[++i] != '\0')
			str[i] = s1[i];
	while (s2[j] != '\0')
		str[i++] = s2[j++];
	str[i] = '\0';
	free(s1);
	return (str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_str;
	size_t	len1;
	size_t	len2;

	if (!s1) // for handeling  stash 
	{
		s1 = malloc(1);
		if (s1) s1[0] = '\0';
	}
	if (!s1 || !s2) return (NULL);
    new_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new_str)
		return (free(s1), NULL);
	ft_memcpy(new_str, s1, len1);
	ft_memcpy(new_str + len1, s2, len2);
	new_str[len1 + len2] = '\0';
	
	free(s1); // Always free the old stash
	return (new_str);
}

char *ft_strdup(const char *s1)
{
    char *dup;

    dup = (char *)malloc(ft_strlen(s1) + 1);
    if (!dup)
        return NULL;
    else
    {
        
    }
}
