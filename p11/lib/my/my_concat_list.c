# include "mylist.h"

void		my_concat_list(linked_list_t **begin1,
			       linked_list_t **begin2)
{
  while ((*begin1)->next)
    {
      begin1 = &(*begin1)->next;
    }
  (*begin1)->next = *begin2;
}
