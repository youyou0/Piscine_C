# include <stdlib.h>
# include "my.h"

char	*my_strdup(char const *src);
char	*concat_params(int n, char **params);
int	my_show_word_array(char * const * tab);
char	**my_str_to_word_array(char const *str);

int	main(int ac, char **av)
{
  //my_putstr(my_strdup("Hello, World !\n"));
  //  my_putstr(concat_params(ac, av));
  //my_show_word_array(av);
  char	**word_tab;
  int	i;

  i = 0;
  word_tab = my_str_to_word_array("Hello world!lmqkjfsd qsdlkfj sdfljk qsfl jmqsdf");
  my_show_word_array(word_tab);
  while (word_tab[i])
    {
      free(word_tab[i]);
      i += 1;
    }
  free(word_tab[i]);
  free(word_tab);
  return (0);
}
