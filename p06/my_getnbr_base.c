#include <unistd.h>

int	my_power_it(int nb, int power);
int	my_strlen(char *str);

int	number_position(char c, char *base)
{
  int	i;

  i = 0;
  while (base[i] && c != base[i])
    {
      i += 1;
    }
  if (base[i] == c)
    {
      return (i);
    }
  return (0);
}

int	my_getnbr(char *str, char *base, int base_int, int n)
{
  int	res;
  int	mul;
  int	pow;

  res = 0;
  mul = 0;
  pow = 0;
  if (*str)
    {
      res += my_getnbr(++str, base, base_int, --n);
      --str;
      ++n;
      mul = number_position(*str, base);
      pow = my_power_it(base_int, n - 1);
    }
  res += mul * pow;
  return (res);
}

int	my_getnbr_base(char const *str, char const *base)
{
  int	base_int;
  int	i;
  int	sign;
  int	res;
  
  sign = 1;
  i = 0;
  res = 0;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	{
	  sign *= -1;
	}
      i += 1;
    }
  base_int = my_strlen((char *) base);
  res = my_getnbr((char *) &str[i],
		  (char *) base,
		  base_int,
		  my_strlen((char *) &str[i]));
  return (sign * res);
}
