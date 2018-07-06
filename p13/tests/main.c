# include <stdlib.h>
# include "my.h"
# include "mylist.h"
# include "btree.h"

int		main()
{
  btree_t	*node;

  node = btree_create_node("salut");
  my_putstr(node->item);
  my_putchar('\n');
  return (EXIT_SUCCESS);
}
