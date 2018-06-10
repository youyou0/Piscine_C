# include <stdlib.h>
# include "my.h"

int	my_sort_word_array(char **tab);
int	my_advanced_sort_word_array(char **tab, int (*cmp)
				    (char const *, char const *));

int	main()
{
  char	**word_array;

  word_array = my_str_to_word_array("world hello sldqkjf lmj kfqs dslqk jmlfjmlqsfj mlqsjl jflqs jlkfsdqjl fjoizejfosndfk nsqvbhsi uhfqfbsdkfh f sdkfns kjfns;");
  my_show_word_array(word_array);
  my_putstr("\n");
  my_sort_word_array(word_array);
  my_show_word_array(word_array);

  while (*word_array++)
    free(*word_array);
  free(word_array);
  word_array = NULL;
  word_array = my_str_to_word_array("world hello sldqkjf lmj kfqs dsqjkf qmlsdj");
  my_putstr("\nAdvanced:\n");
  my_advanced_sort_word_array(word_array, &my_strcmp);
  my_show_word_array(word_array);
  return (0);
}
