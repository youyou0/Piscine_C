# include <stdlib.h>
# include "my.h"

struct info_param	*my_params_to_array(int ac, char **av)
{
  struct info_param	*i_param;
  int			i;

  i = 0;
  if (!(i_param = (struct info_param *)
	malloc(sizeof(struct info_param) * ac + 1)))
      return (NULL);
  while (i < ac)
    {
      i_param[i].length = my_strlen(av[i]);
      i_param[i].str = av[i];
      i_param[i].copy = my_strdup(av[i]);
      i_param[i].word_array = my_str_to_word_array(av[i]);
      i += 1;
    }
  i_param[i].str = 0;
  return (i_param);
}
