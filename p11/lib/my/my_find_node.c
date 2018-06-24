# include "mylist.h"

linked_list_t	*my_find_node(linked_list_t const *begin,
			      void const *data_ref, int (*cmp)())
{
  linked_list_t	*current;

  current = (linked_list_t*) begin;
  while (current)
    {
      if ((*cmp)(current->data, data_ref) == 0)
	return (current);
      current = current->next;
    }
  return (current);
}
