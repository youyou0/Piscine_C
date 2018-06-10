void	my_putchar(char c);

int	my_putstr(char *str)
{
  int	i;

  i = -1;
  while (str[++i])
    my_putchar(str[i]);
  return (0);
}
