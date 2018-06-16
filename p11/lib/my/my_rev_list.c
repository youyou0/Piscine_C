# include <stdlib.h>
# include "my.h"
# include "mylist.h"

void		my_rev_list(linked_list_t **begin)
{
  linked_list_t *current;
  linked_list_t *prev;
  linked_list_t *next;

  current = *begin;
  prev = NULL;
  while (current)
    {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }
  *begin = prev;
}
