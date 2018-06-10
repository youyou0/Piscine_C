# include "my.h"

int	my_advanced_sort_word_array(char **tab, int (*cmp)
				    (char const *, char const *))
{
  int	smaller_str;
  char	*tmp;
  int	i;
  int	j;

  i = 0;
  smaller_str = 0;
  while (tab[i])
    {
      j = i;
      while (tab[j])
	{
	  if ((*cmp)(tab[j], tab[smaller_str]) < 0)
	    {
	      smaller_str = j;
	    }
	  j += 1;
	}
      tmp = tab[smaller_str];
      tab[smaller_str] = tab[i];
      tab[i] = tmp;
      i += 1;
      smaller_str = i;
    }
  return (0);
}
