# include <stdlib.h>
# include "my.h"

struct info_param	*my_params_to_array(int ac, char **av);

int			main(int ac, char **av)
{
  struct info_param	*i_params;
  int			i;

  i = 0;
  i_params = my_params_to_array(ac, av);
  while (i_params[i].str)
    {
      my_put_nbr(i_params[i].length);
      my_putchar('\n');
      my_putstr(i_params[i].str);
      my_putchar('\n');
      my_putstr(i_params[i].copy);
      my_putchar('\n');
      my_show_word_array(i_params[i].word_array);
      i += 1;
    }
  return (EXIT_SUCCESS);
}
