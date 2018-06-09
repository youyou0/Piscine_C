#include <unistd.h>

int	my_str_islower(char const *str)
{
  while (*str)
    {
      if (*str > 122 || *str < 97)
	return (0);
      str++;
    }
  return (1);
}
