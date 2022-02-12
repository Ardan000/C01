#include <unistd.h>


int ft_strlen(char *str)
{
    int valeur = 0;

    while (str[valeur] != 0)
    {
        valeur++;
    }

    return valeur;
}

