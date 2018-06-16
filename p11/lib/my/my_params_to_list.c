# include <stdlib.h>
# include "mylist.h"

linked_list_t	*my_params_to_list(int ac, char *const *av)
{
  linked_list_t	*new_list;
  linked_list_t	*tmp;
  int		i;

  i = 0;
  if (!(new_list = (linked_list_t *) malloc(sizeof(linked_list_t))))
    return (NULL);
  tmp = new_list;
  while (i < ac)
    {
      tmp->data = av[i];
      tmp->next = NULL;
      if (av[i + 1])
	{
	  if (!(tmp->next = (linked_list_t *) malloc(sizeof(linked_list_t))))
	    return (NULL);
	  tmp = tmp->next;
	}
      i += 1;
    }
  return (new_list);
}
