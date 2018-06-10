void	my_putchar(char c);

int	my_put_nbr(int nb)
{
  long	nbr;

  nbr = nb;
  if (nbr < 0)
    {
      my_putchar('-');
      nbr *= -1;
    }
  if (nbr > 9)
    my_put_nbr(nbr / 10);
  my_putchar((nbr % 10) + 48);
  return (0);
}
