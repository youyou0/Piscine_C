# include <stdlib.h>
# include "my.h"
# include "mylist.h"
# include "btree.h"

int		main()
{
  btree_t	*tree;

  tree = NULL;
  btree_insert_data(&tree, "Good", my_strcmp);
  btree_insert_data(&tree, "luck", my_strcmp);
  btree_insert_data(&tree, "for", my_strcmp);
  btree_insert_data(&tree, "this", my_strcmp);
  btree_insert_data(&tree, "great", my_strcmp);
  btree_insert_data(&tree, "day", my_strcmp);
  btree_insert_data(&tree, "of", my_strcmp);
  btree_insert_data(&tree, "C", my_strcmp);
  btree_insert_data(&tree, "pool", my_strcmp);
  //btree_apply_infix(tree, my_putstr);
  //my_putchar('\n');
  //my_putstr(btree_search_item(tree, "this", my_strcmp));
  //my_putchar('\n');
  my_put_nbr(btree_level_count(tree));
  return (EXIT_SUCCESS);
}
