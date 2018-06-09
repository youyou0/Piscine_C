#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	my_putstr(char *str);
int	my_put_nbr(int n);
int	my_factorielle_it(int nb);
int	my_factorielle_rec(int nb);
int	my_power_it(int nb, int power);
int	my_power_rec(int nb, int power);
int	my_compute_square_root(int nb);
int	my_is_prime(int nb);

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	main()
{
  my_putstr("MY FAC IT : \n");
  my_put_nbr(my_factorielle_it(15));
  my_putchar('\n');

  my_putstr("\nMY FAC REC : \n");
  my_put_nbr(my_factorielle_rec(15));
  my_putchar('\n');

  my_putstr("\nMY POW IT : \n");
  my_put_nbr(my_power_it(2, 5));
  my_putchar('\n');
  
  my_putstr("\nMY POW REC : \n");
  my_put_nbr(my_power_rec(10, 5));
  my_putchar('\n');

  my_putstr("\nMY SQUARE ROOT : \n");
  my_put_nbr(my_compute_square_root(10));
  my_putchar('\n');
  my_put_nbr(my_compute_square_root(9 * 9));
  my_putchar('\n');
  my_put_nbr(my_compute_square_root(4 * 4));
  my_putchar('\n');
  my_put_nbr(my_compute_square_root(9));
  my_putchar('\n');
  my_put_nbr(my_compute_square_root(4));
  my_putchar('\n');

  my_putstr("MY IS PRIME : \n");
  my_put_nbr(my_is_prime(0));
  my_putchar('\n');
  my_put_nbr(my_is_prime(59));
  my_putchar('\n');
  my_put_nbr(my_is_prime(97));
  my_putchar('\n');
  my_put_nbr(my_is_prime(1000));
  my_putchar('\n');
  return (0);
}
