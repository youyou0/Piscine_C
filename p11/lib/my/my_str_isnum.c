#include <unistd.h>

int	my_str_isnum(char const *str)
{
  while (*str)
    {
      if (*str > 57 || *str < 48)
	return (0);
      str++;
    }
  return (1);
}
