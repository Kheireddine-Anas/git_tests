#include <unistd.h>

void	ft_putchar(char c);
//void	ft_writeemptyligne(int n);
//void	ft_writeligne(int n);
/////////////////////////////////////////////////
void	prtchar(int n, char c)
{
	while (n > 0)
	{
		ft_putchar(c);
		n--;
	}
}

void	ft_writeligne(int n)
{
	if (n > 0)
		{
			write(1, "A", 1);
			prtchar(n - 2,'B');
		}
	else
		{
			write(1, "C", 1);
			prtchar(-n - 2,'B');
		}
	if(n > 0)
		write(1, "C\n", 2);
	else
		write(1, "A\n", 2);
}

void	ft_writeemptyligne(int n)
{
	write(1, "B", 1);
	prtchar(n - 2, ' ');
	if (n >= 2)
		write(1, "B\n", 2);
}

/////////////////////////////////////////////////
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
