#include <unistd.h>

int	my_str_isprintable(char const *str)
{
  while (*str)
    {
      if ((*str > 0 && *str < 32) || *str > 126 || *str < 0)
	return (0);
      str++;
    }
  return (1);
}
