int	my_putnbr_base(int nbr, char const *base);
void	my_putchar(char c);

int	my_showstr(char const *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] > 0 && str[i] < 32)
	{
	  my_putchar('\\');
	  my_putchar('0');
	  my_putnbr_base((int) str[i], "0123456789abcdef");
	}
      else
	{
	  my_putchar(str[i]);
	}
      i += 1;
    }
  my_putchar('\n');
  return (0);
}
