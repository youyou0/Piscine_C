# include <stdlib.h>
# include "my.h"
# include "mylist.h"
# include "btree.h"

int		main()
{
  btree_t	*tree;

  tree = NULL;
  btree_insert_data(&tree, "hello", my_strcmp);
  btree_insert_data(&tree, "world", my_strcmp);
  btree_insert_data(&tree, "my", my_strcmp);
  btree_insert_data(&tree, "name", my_strcmp);
  btree_insert_data(&tree, "is", my_strcmp);
  btree_insert_data(&tree, "youness", my_strcmp);
  btree_apply_infix(tree, my_putstr);
  return (EXIT_SUCCESS);
}
