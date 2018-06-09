int	my_strlen(char *str);
char	*my_strncpy(char *dest, char const *src, int n);

char	*my_strncat(char *dest, char const *src, int nb)
{
  int	n;
  
  n = my_strlen(dest);
  return (my_strncpy(&dest[n], src, nb));
}
