#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int valeur = 0;

    while (str[valeur] != 0)
    {
        valeur++;
    }

    return valeur;
}

int main(int argc, char **argv)
{
    (void)argc;
    int ret = ft_strlen(argv[9]);
    printf("%d\n", ret);
}