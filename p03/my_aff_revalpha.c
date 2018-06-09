void	my_putchar(char c);

int	my_aff_revalpha()
{
  char	l;

  l = 'z' + 1;
  while (l-- != 'a')
    my_putchar(l);
  return (0);
}
