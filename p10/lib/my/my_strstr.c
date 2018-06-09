# include <unistd.h>
# include <stdlib.h>

int	my_strcmp(char const *s1, char const *s2);

char	*my_strstr(char *str, char const *to_find)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (my_strcmp(&str[i], to_find) == 0)
	return (&str[i]);
      i += 1;
    }
  return (NULL);
}
