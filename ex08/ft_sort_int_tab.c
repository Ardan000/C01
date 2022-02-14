#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int a = 0;  // a doit etre egale à size-1 max
    int b = 1;  // b doit etre egale à size-1 max
    int c = 0;
    
    while(a < size) 
    {
        while(b < size)
        {
            if(tab[a] > tab[b])
            {
                int c = tab[a];
                tab[a] = tab[b];
                tab[b] = c;
                //printf("%d, %d\n", tab[a], tab[b]);
            }
            b++;
        }
        c++;
        b = 1 + c;
        a = 0 + c;
    }
    //printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10], tab[11]);
}
/*
int main()
{
    int my_tab[] = {54, 987, 2, -752, 21, -9873, 0, 1, -8756414, 201, 4, 1};
    ft_sort_int_tab(my_tab, 12);
}
*/