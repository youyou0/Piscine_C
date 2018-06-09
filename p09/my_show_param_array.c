# include "my.h"

int	my_show_param_array(struct info_param const *par)
{
  int			i;

  i = 0;
  while (par[i].str)
    {
      my_put_nbr(par[i].length);
      my_putchar('\n');
      my_putstr(par[i].str);
      my_putchar('\n');
      my_putstr(par[i].copy);
      my_putchar('\n');
      my_show_word_array(par[i].word_array);
      my_putchar('\n');
      i += 1;
    }
  return (0);
}
