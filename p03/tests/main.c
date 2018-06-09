#include <unistd.h>

int		my_aff_alpha();
int		my_aff_revalpha();
int		my_aff_chiffre();
int		my_isneg(int n);
int		my_aff_comb();
int		my_aff_comb2();
int		my_put_nbr(int nb);
int		my_aff_combn(int nb);

void		my_putchar(char c)
{
  write(1, &c, 1);
}

int		main()
{
  my_aff_alpha();
  my_putchar('\n');
  my_aff_revalpha();
  my_putchar('\n');
  my_aff_chiffre();
  my_putchar('\n');
  my_isneg(-1);
  my_putchar('\n');
  my_isneg(0);
  my_putchar('\n');
  my_isneg(1);
  my_putchar('\n');
  my_aff_comb();
  my_putchar('\n');
  my_aff_comb2();
  my_putchar('\n');
  my_put_nbr(42);
  my_putchar('\n');
  my_put_nbr(0);
  my_putchar('\n');
  my_put_nbr(-42);
  my_putchar('\n');
  my_put_nbr(2147483647);
  my_putchar('\n');
  my_put_nbr(-2147483647);
  my_putchar('\n');
  return (0);
}
