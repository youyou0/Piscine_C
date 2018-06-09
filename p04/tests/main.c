#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	my_swap(int *a, int *b);
int	my_put_nbr(int n);
int	my_putstr(char *str);
int	my_strlen(char *str);
char	*my_evil_str(char *str);
int	my_getnbr(char *str);
void	my_sort_int_tab(int *tab, int size);

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	main()
{
  int	*a;
  int	*b;
  int	num;
  int	num2;
  char	*str;
  int	tab[5] = {5, 3, 4, 1, 2};
  int	i;

  i = -1;
  num = 10;
  num2 = 15;
  a = &num;
  b = &num2;
  my_put_nbr(*a);
  my_putchar('\n');
  my_put_nbr(*b);
  my_putchar('\n');
  my_swap(a, b);
  my_put_nbr(*a);
  my_putchar('\n');
  my_put_nbr(*b);
  my_putchar('\n');

  my_putstr("Hello, world!\n");

  my_put_nbr(my_strlen("Hello, world!\n"));
  my_putchar('\n');

  str = strdup("Hello, world!\n");
  my_putstr(my_evil_str(str));
  my_putchar('\n');

  free(str);
  str = strdup("42");
  my_put_nbr(my_getnbr(str));
  my_putchar('\n');

  free(str);
  str = strdup("-2147483648");
  my_put_nbr(my_getnbr(str));
  my_putchar('\n');

  free(str);
  str = strdup("2147483647");
  my_put_nbr(my_getnbr(str));
  my_putchar('\n');
  free(str);

  my_sort_int_tab(tab, 5);
  while (++i < 5)
    my_put_nbr(tab[i]);
  my_putchar('\n');
  return (0);
}
