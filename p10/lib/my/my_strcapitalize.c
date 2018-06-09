#include <unistd.h>

char	*my_strlowcase(char *str);

char	*my_strcapitalize(char *str)
{
  int	i;

  str = my_strlowcase(str);
  i = 0;
  while (str[i])
    {
      if (str[i] > 96 && str[i] < 123 && (str[i - 1] == ' ' || i == 0))
	{
	  str[i] -= 32;
	}
      i += 1;
    }
  return (str);
}
