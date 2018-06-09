void	my_putchar(char c);
void	my_putstr(char *str);
int	my_putnbr_base(int nbr, char const *base);

int	my_char_isprintable(char const c)
{
  if (c < 32 || c > 126)
    return (0);
  return (1);
}

void	my_putline_hex(char const *str, int i)
{
  while (i % 16 != 0)
    {
      my_putnbr_base(str[i], "0123456789abcdef");
      if (i % 2)
	{
	  my_putchar(' ');
	}
      i += 1;
    }
}

int	my_putline(char const *str, int i)
{
  while (i % 16 != 0)
    {
      if (!my_char_isprintable(str[i]))
	{
	  my_putchar('.');
	}
      else
	{
	  my_putchar(str[i]);
	}
      i += 1;
    }
  return (i);
}

int	my_showmem(char const *str, int size)
{
  int	i;

  i = 0;
  while (i < size)
    {
      my_putnbr_base((int) &str[i], "0123456789abcdef");
      my_putstr(": ");
      my_putnbr_base((str[i]), "0123456789abcdef");
      my_putline_hex(str, i + 1);
      if (str[i] > 0 && str[i] < 32)
	{
	  my_putchar('.');
	}
      else
	{
	  my_putchar(str[i]);
	}
      i = my_putline(str, i + 1);
      my_putchar('\n');
    }
  return (0);
}
