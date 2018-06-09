int	my_factorielle_rec(int nb)
{
  int   res;

  res = 1;
  if (nb > 1)
    res = my_factorielle_rec(nb - 1);
  return (res * nb);
}
