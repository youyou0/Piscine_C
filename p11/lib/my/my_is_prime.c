int	my_compute_square_root(int nb);

int	my_is_prime(int nb)
{
  int	i;
  int	limit;

  i = 1;
  limit = my_compute_square_root(nb);
  if (nb % 2 == 0)
    return (0);
  while (i < limit)
    {
      if (nb % i == 0)
	return (0);
      i += 2;
    }
  return (1);
}
