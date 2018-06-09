# include <stdlib.h>
# include "my.h"

char	*my_realloc(char *ptr, size_t size)
{
  char	*new_ptr;

  if (!ptr)
    return (malloc(sizeof(char) * size));
  if (!(new_ptr = malloc(sizeof(char) * size)))
    return (NULL);
  new_ptr = my_strcpy(new_ptr, ptr);
  free(ptr);
  return (new_ptr);
}

char	*concat_params(int n, char **params)
{
  char	*new_string;
  int	i;
  int	len;

  i = 2;
  if (!(new_string = my_strdup(params[1])))
    {
      return (NULL);
    }
  while (i < n)
    {
      len = my_strlen(new_string);
      if (!(new_string = my_realloc(new_string,
				    len + my_strlen(params[i]) + 2)))
	{
	  return (NULL);
	}
      new_string[len] = '\n';
      my_strcpy(&new_string[len + 1], params[i]);
      i += 1;
    }
  return (new_string);
}
