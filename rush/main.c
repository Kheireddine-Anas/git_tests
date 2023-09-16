#include <unistd.h>

void	ft_putchar(char c);
void	rush();

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

int main()
{
	rush(1001, 4);
	return (0);
}

// -Wall -Wextra -Werror