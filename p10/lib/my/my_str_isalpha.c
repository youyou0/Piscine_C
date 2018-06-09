int	my_str_isalpha(char const *str)
{
  while (*str)
    {
      if (*str > 122 || (*str < 65 && *str > 57) ||
	  *str  < 48 || (*str > 90 && *str < 97))
	return (0);
      str++;
    }
  return (1);
}
