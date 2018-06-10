int	cut(int *tab, int start, int end)
{
  int	pivot;
  int	i;  
  int	j;
  int	mem;

  pivot = tab[start];
  i = start - 1;
  j = end + 1;
  while (1)
    {
      j--;
      while (tab[j] > pivot)
	j--;
      i++;
      while (tab[i] < pivot)
	i++;
      if (i < j) {
	mem = tab[i];
	tab[i] = tab[j];
	tab[j] = mem;
      }
      else
	return (j);
    }
  return (0);
}

void	my_qsort(int *tab, int start, int end)
{
  int	q;

  if (start < end)
    {
      q = cut(tab, start, end);
      my_qsort(tab, start, q);
      my_qsort(tab, q + 1, end);
    }
}

void	my_sort_int_array(int *tab, int size)
{
  my_qsort(tab, 0, size - 1);
}
