#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{

    int a = 0;
    int b = size;
    int c;
    while(b != (b/2))
    {   
        c = tab[a];
        tab[a] = tab[b];
        tab[b] = c;
        a++;
        b--;
    }
    
}

