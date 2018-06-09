void	my_putchar(char c);

int	my_aff_chiffre()
{
  char	l;

  l = '0' - 1;
  while (l++ != '9')
    my_putchar(l);
  return (0);
}
