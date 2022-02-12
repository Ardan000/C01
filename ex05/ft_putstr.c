#include <unistd.h>

void ft_putstr(char* sttr)
{
    int itamere;

    itamere = 0; 

    while(sttr[itamere] != 0)
    {
        itamere++;
    }
   write(1 , sttr, itamere);
}


