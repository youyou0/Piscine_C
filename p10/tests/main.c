# include "my.h"

int	my_sort_word_array(char **tab);

int	main()
{
  char	**word_array;

  word_array = my_str_to_word_array("world hello");
  //  my_show_word_array(word_array);
  my_sort_word_array(word_array);
  my_show_word_array(word_array);
  return (0);
}
