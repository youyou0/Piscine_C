# include <stdlib.h>
# include "mylist.h"

int		my_delete_nodes(linked_list_t **begin,
				void const *data_ref, int (*cmp)())
{
  linked_list_t *current;

  while (*begin)
    {
      current = *begin;
      if ((*cmp)(current->data, data_ref) == 0)
	{
	  *begin = current->next;
	  free(current);
	}
      begin = &(*begin)->next;
    }
  return (0);
}
