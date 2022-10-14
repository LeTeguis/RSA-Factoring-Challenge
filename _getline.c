#include "factors.h"

ssize_t _getline(int fd, char **linestr, size_t *n)
{
        size_t size_read = 0;
        char buf[2];
        size_t index = *n;

        if ((linestr == 0) || (n == 0) || fd == -1)
                return (-1);
        if (*linestr == 0)
        {
                *linestr = (char *)malloc(sizeof(char));
                if (*linestr == 0)
                        return (-1);
                index = 1;
        }
        while (1)
        {
                ssize_t erreur = read(fd, buf, sizeof(char));

                if (erreur == -1)
                        return (-1);
                if (buf[0] == EOF || buf[0] == '\n')
                        break;
                if (erreur == sizeof(char))
                {
                        char *tmp = (char *)realloc(*linestr, sizeof(char) * (index + 1));

                        if (tmp == 0)
                                return (-1);
                        *linestr = tmp;
                        (*linestr)[index - 1] = (char)buf[0];
                        index++;
                        size_read++;
                }
        }
        *n = index - 1;
        (*linestr)[index - 1] = '\0';
        return (size_read * sizeof(char));
}
