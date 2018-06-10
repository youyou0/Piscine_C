# include "my.h"

int	my_sort_word_array(char **tab)
{
  int	smaller_str;
  char	*tmp;
  int	i;
  int	j;

  i = 0;
  tmp = tab[i];
  while (tab[i])
    {
      j = i;
      while (tab[j])
	{
	  if (my_strcmp(tab[j], tmp) < 0)
	    {
	      smaller_str = j;
	    }
	  j += 1;
	}
      tmp = tab[smaller_str];
      tab[smaller_str] = tab[i];
      tab[i] = tmp;
      i += 1;
    }
  return (0);
}
