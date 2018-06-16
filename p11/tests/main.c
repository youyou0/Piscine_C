# include <stdlib.h>
# include "my.h"
# include "mylist.h"

int	main(int ac, char **av)
{
  linked_list_t *list;

  list = my_params_to_list(ac, av);
  my_rev_list(&list);

  while (list)
    {
      my_putstr(list->data);
      my_putchar('\n');
      list = list->next;
    }

  return (0);
}
