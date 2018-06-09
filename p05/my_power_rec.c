int	my_power_rec(int nb, int power)
{
  if (power == 0)
    return (1);
  if (power > 1)
    nb *= my_power_rec(nb, power - 1);
  return (nb);
}
