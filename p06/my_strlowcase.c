#include <unistd.h>

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] > 64 && str[i] < 91)
	{
	  str[i] += 32;
	}
      i += 1;
    }
  return (str);
}
