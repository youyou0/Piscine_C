char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] > 96 && str[i] < 123)
	{
	  str[i] -= 32;
	}
      i += 1;
    }
  return (str);
}
