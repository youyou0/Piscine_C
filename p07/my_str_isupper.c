int	my_str_isupper(char const *str)
{
  while (*str)
    {
      if (*str > 90 || *str < 65)
	return (0);
      str++;
    }
  return (1);
}
