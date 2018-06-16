# include "my.h"
# include "mylist.h"

int	my_list_size(linked_list_t const *begin)
{
  int	count;

  count = 0;
  while (begin)
    {
      begin = begin->next;
      count += 1;
    }
  return (count);
}
