# include <stdlib.h>
# include "my.h"
# include "mylist.h"

void		print_list(linked_list_t *list)
{
  while (list)
    {
      my_putstr(list->data);
      my_putchar('\n');
      list = list->next;
    }
}

int		main(int ac, char **av)
{
  linked_list_t *list;

  list = my_params_to_list(ac, av);
  //my_rev_list(&list);
  //my_delete_nodes(&list, "hello", my_strcmp);
  //my_concat_list(&list, &list);
  print_list(list);
  my_sort_list(&list, my_strcmp);
  print_list(list);
  return (0);
}
