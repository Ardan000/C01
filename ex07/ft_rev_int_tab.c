#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{

    int a = 0;    //a = 0
    int b = size - 1;   // b = 6
    int swap;    
    while(b > (size/2))      // 6 < 7/2
    {   
        swap = tab[a];      // c = 1
        tab[a] = tab[b];  // tab[a] = 96876546
        tab[b] = swap;
        a++;
        b--;
    }
}

/*void print_my_tab(int* tab, int size)
{
    int i = 0;
    while(i < size)
    {
        printf("%d, ", tab[i]);
        i++;
    }
printf("\n");
}

int main()
{
    int my_tab[] = {1, 5, -8, 654, 5464635, -46548647, 96876546};
    print_my_tab(my_tab, 7);
    ft_rev_int_tab(my_tab, 7);
    print_my_tab(my_tab, 7);
}
*/