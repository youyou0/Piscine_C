# include "mylist.h"

int		my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
  linked_list_t *current;

  current = begin;
  while (current)
    {
      (*f)(current->data);
      current = current->next;
    }
  return (0);
}
