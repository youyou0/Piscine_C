# include "my.h"

int	my_word_array_size(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      i += 1;
    }
  return (i);
}

char	**my_word_swap(char **word_tab, int pos, int pos2)
{
  char	*tmp;

  tmp = word_tab[pos];
  word_tab[pos] = word_tab[pos2];
  word_tab[pos2] = tmp;
  return (word_tab);
}

int	partition(char **word_tab, int start, int end)
{
  int	wall;
  int	pivot;
  int	i;

  i = start;
  pivot = end;
  wall = start;
  while (i < pivot)
    {
      if (my_strcmp(word_tab[i], word_tab[pivot]) < 0)
	{
	  word_tab = my_word_swap(word_tab, wall, i);
	  wall += 1;
	}
      i += 1;
    }
  word_tab = my_word_swap(word_tab, wall, pivot);
  return (wall);
}

char	**my_qsort_word_array(char **word_tab, int pivot, int end)
{
  if (pivot < end)
    {
      pivot = partition(word_tab, pivot, end);
      word_tab = my_qsort_word_array(word_tab, 0, pivot - 1);
      word_tab = my_qsort_word_array(word_tab, pivot + 1, end);
    }
  return (word_tab);
}

int	my_sort_word_array(char **tab)
{
  tab = my_qsort_word_array(tab, 0, my_word_array_size(tab) - 1);
  return (0);
}
