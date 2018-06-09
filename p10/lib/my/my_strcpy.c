# include <unistd.h>

char	*my_strcpy(char *dest, char const *src)
{
  int	i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i += 1;
    }
  dest[i] = 0;
  return (dest);
}
