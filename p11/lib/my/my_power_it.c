int	my_power_it(int nb, int power)
{
  int	i;
  int	n;

  i = 0;
  n = nb;
  if (power == 0)
    {
      return (1);
    }
  while (++i < power)
    nb *= n;
  return (nb);
}
