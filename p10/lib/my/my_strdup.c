# include <stdlib.h>
# include "my.h"

char	*my_strdup(char const *src)
{
  char	*str_dup;

  if (!(str_dup = (char *) malloc(sizeof(char) * my_strlen(src) + 1)))
    return (NULL);
  return(my_strcpy(str_dup, src));
}
