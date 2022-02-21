#include<stdio.h>

int	ft_rev_int_tab(int tab[], int size)
{       int i=0;
        int temp;
        int j=0;
     
        while(i < size )
        {
            if (tab[i]>tab[i+1])
            {
                temp = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = temp;
                ft_rev_int_tab(tab, size);
                printf("%d\n",tab[i]);
              
                
            }

            i++;
        }
          
              
 
}

int main (void)
{  int tab[5] = {11,6,7,8,2};
   int size=6;
   ft_rev_int_tab(tab,size);
}