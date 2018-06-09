# include <stdlib.h>
# include "my.h"

void	add(int a, int b)
{
  my_put_nbr(a + b);
}

void	sub(int a, int b)
{
  my_put_nbr(a - b);
}

void	mul(int a, int b)
{
  my_put_nbr(a * b);
}

void	division(int a, int b)
{
  if (b == 0)
    {
      my_putstr("Stop: division by zero\n");
      return;
    }
  my_put_nbr(a / b);
}

void	mod(int a, int b)
{
  if (b == 0)
    {
      my_putstr("Stop: modulo by zero\n");
      return;
    }
  my_put_nbr(a % b);
}

static void (*op_ptr[5])(int, int) =
{
  &add, &sub, &mul, &division, &mod
};

int	main(int ac, char **av)
{
  char	ops[6];
  int	i;

  i = 0;
  ops[0] = '+';
  ops[1] = '-';
  ops[2] = '*';
  ops[3] = '/';
  ops[4] = '%';
  ops[5] = 0;
  if (ac != 4)
    {
      return (EXIT_FAILURE);
    }
  while (ops[i] && ops[i] != *av[2])
      i += 1;
  if (*av[2] != ops[i])
    {
      my_putstr("0\n");
      return (EXIT_FAILURE);
    }
  (*op_ptr[i])(my_getnbr(av[1]), my_getnbr(av[3]));
  my_putchar('\n');
  return (EXIT_SUCCESS);
}
