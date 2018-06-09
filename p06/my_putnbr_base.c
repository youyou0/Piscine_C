#include <unistd.h>

void	my_putchar(char c);
int	my_strlen(char *str);

void	my_putnbr(int nbr, char const *base, int base_int)
{
  int	remainder;

  remainder = nbr % base_int;
  if (nbr > 0)
    {
      my_putnbr(nbr / base_int, base, base_int);
      my_putchar(base[remainder]);
    }
}

int	my_putnbr_base(int nbr, char const *base)
{
  int	base_int;

  base_int = my_strlen((char *) base);
  if (nbr < 10)
    {
      my_putchar('0');
      my_putchar(base[nbr]);
      return (base_int);
    }
  if (nbr < 0)
    {
      my_putchar('-');
      nbr *= -1;
    }
  my_putnbr(nbr, base, base_int);
  return (base_int);
}
