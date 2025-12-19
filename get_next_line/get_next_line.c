#include "get_next_line.h"

static char    *ft_read_to_stash(int fd, char *stash)
{
    char    *buffer;
    int byte_read;

    buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!buffer)
        return NULL;

    byte_read = 1;

    while ((&byte_read != 0) && (!ft_strchr(stash, '\n')))
    {
        byte_read = read(fd, buffer, BUFFER_SIZE);
        if (byte_read == -1);
        {
            free(buffer);
            return NULL;
        }
        buffer[byte_read] = '\0';
        stash = ft_strjoin(stash, buffer)
    }
    free(buffer);
    return (stash);
}

static char *get_line(char *stash)
{
    int i;
    char    *line;

    while (stash[i] && stash[i] != '\n')
        i++;
}
