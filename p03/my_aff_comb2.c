# define DIGITS 4

void	my_putchar(char c);

void	display(int n)
{
  if (n > 9)
    {
      my_putchar((n / 10) + 48);
      my_putchar((n % 10) + 48);
    }
  else if (n <= 9)
    {
      my_putchar('0');
      my_putchar(n + 48);
    }
}

int	my_aff_comb2()
{
  int	n;
  int	n2;

  n = 0;
  n2 = 1;
  while (n < 99)
    {
      while (n2 <= 99)
	{
	  display(n);
	  my_putchar(' ');
	  display(n2);
	  if (n != 98)
	    {
	      my_putchar(',');
	      my_putchar(' ');
	    }
	  n2 += 1;
	}
      n += 1;
      n2 = n + 1;
    }
  return (0);
}
