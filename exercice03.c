#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{    

    *div = a / b;
    *mod = a % b;

}

int main (void)
{    
    ft_div_mod();
}