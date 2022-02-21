#include <unistd.h>

void put_char(char c)
{
    write(1,&c,1);
}

void ft_strlen(char *str)
{
    int i=0;
   
    while (str[i] !='\0')
    {
       
        i++;
    }
    return(i);
    
}

int main (void)
{
    
    ft_strlen();
}