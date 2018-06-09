#include <limits.h>

int		my_getnbr(char *str)
{
  long		nbr;
  int		i;
  short		is_neg;

  i = -1;
  nbr = 0;
  is_neg = 0;
  if (str[0] == '-')
    {
      i = 0;
      is_neg = 1;
    }
  while (str[++i])
    nbr = 10 * nbr + str[i] - 48;
  if (is_neg)
    nbr *= -1;
  if (nbr > INT_MAX || nbr < INT_MIN)
    return (0);
  return (nbr);
}
