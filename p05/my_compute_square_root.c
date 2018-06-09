int	my_compute_square_root(int nb)
{
  int	i;

  i = 0;
  while (i * i != nb && i * i < nb)
    i += 1;
  if (i * i > nb)
    return (0);
  return (i);
}
