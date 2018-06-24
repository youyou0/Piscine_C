# include <stdlib.h>
# include "my.h"
# include "mylist.h"

void		my_add_in_sorted_list(linked_list_t **begin,
				      void *data, int (*cmp)())
{
  linked_list_t	new_elem;
  linked_list_t	*tmp;

  new_elem.data = data;
  new_elem.next = NULL;
  tmp = *begin;
  while (tmp && tmp->next)
    tmp = tmp->next;
  if (tmp)
    tmp->next = &new_elem;
  else
    {
      tmp = &new_elem;
      *begin = tmp;
    }
  my_sort_list(begin, cmp);
}
