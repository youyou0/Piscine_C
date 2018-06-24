# include "mylist.h"

int		my_apply_on_matching_nodes(linked_list_t *begin,
					   int (*f)(),
					   void const *data_ref,
					   int (*cmp)())
{
  linked_list_t	*current;

  current = begin;
  while(current)
    {
      if ((*cmp)(current->data, data_ref) == 0)
	(*f)(current->data);
      current = current->next;
    }
  return (0);
}
