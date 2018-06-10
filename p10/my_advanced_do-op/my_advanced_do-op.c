# include <stdlib.h>
# include "my.h"
# include "my_opp.h"

void	my_add(int a, int b)
{
  my_put_nbr(a + b);
}

void	my_sub(int a, int b)
{
  my_put_nbr(a - b);
}

void	my_mul(int a, int b)
{
  my_put_nbr(a * b);
}

void	my_div(int a, int b)
{
  if (b == 0)
    {
      my_putstr("Stop: division by zero\n");
      return;
    }
  my_put_nbr(a / b);
}

void	my_mod(int a, int b)
{
  if (b == 0)
    {
      my_putstr("Stop: modulo by zero\n");
      return;
    }
  my_put_nbr(a % b);
}

void	my_usage(int a, int b)
{
  (void) a;
  (void) b;
  my_putstr("error: only [ + - / * % ] are supported\n");
}

int	main(int ac, char **av)
{
  int	i;

  i = 0;
  if (ac != 4)
    {
      return (EXIT_FAILURE);
    }
  while (i < 5 && *OPERATORS_FUNCS[i].op != *av[2])
    {
      i += 1;
    }
  (*OPERATORS_FUNCS[i].func)(my_getnbr(av[1]), my_getnbr(av[3]));
  my_putchar('\n');
  return (EXIT_SUCCESS);
}
