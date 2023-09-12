#include <unistd.h>

void ft_print_comb(void){
    char i;
    char j;
    char k;
    i = '0';
    j = '0';
    k = '0';
    while (i <= '9')
    {
        write(1, &i, 1);
        while (j <= 9)
        {
            write(1, &j, 1);
            while (k <= 9)
            {
                write(1, &k, 1);
                k++;
            }
            j++;
            
        }
        i++;
        
    }
    
}
int main()
{
    ft_print_comb();
}