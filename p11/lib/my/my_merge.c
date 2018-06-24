# include "my.h"
# include "mylist.h"

void		my_merge(linked_list_t **begin1,
			 linked_list_t *begin2, int (*cmp)())
{
  linked_list_t	*tmp;

  if (!begin1)
    {
      begin1 = &begin2;
      return;
    }
  tmp = *begin1;
  while (tmp && tmp->next)
    tmp = tmp->next;
  if (tmp)
    tmp->next = begin2;
  else if (tmp)
    *begin1 = begin2;
  my_sort_list(begin1, cmp);
}
