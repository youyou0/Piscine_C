int	my_strlen(char *str);
char	*my_strcpy(char *dest, char const *src);

char	*my_strcat(char *dest, char const *src)
{
  int	n;
  
  n = my_strlen(dest);
  return (my_strcpy(&dest[n], src));
}
