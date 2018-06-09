# include "my.h"

int	my_show_word_array(char * const * tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i += 1;
    }
  return (i);
}
