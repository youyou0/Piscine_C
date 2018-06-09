void	my_putchar(char c);
int	my_strlen(char *str);

char	*my_evil_str(char *str)
{
  char	new_str[my_strlen(str)];
  int	i;
  int	j;

  i = my_strlen(str) - 1;
  j = 0;
  while (i >= 0)
    {
      new_str[j] = str[i];
      i -= 1;
      j += 1;
    }
  new_str[j] = 0;
  while (new_str[++i])
    str[i] = new_str[i];
  str[i] = 0;
  return (str);
}
