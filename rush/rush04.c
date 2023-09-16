#include <unistd.h>

void	ft_putchar(char c);
void	ft_writeemptyligne(int n);
void	ft_writeligne(int n);

int rush(int x, int y)
{
	if (x > 1000 || y > 1000)
	{
		write(1, "Correct The input number\n", 25); //Handling the error message
		return(0);
	}
	if(x <= 0 || y <= 0)
		return (0);
	ft_writeligne(x);
	while (y - 2 > 0)
	{
		ft_writeemptyligne(x);
		y--;
	}
	if (y == 2)
		ft_writeligne(-x);
	return (0);
}
