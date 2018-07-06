# include <stdlib.h>
# include "btree.h"

btree_t		*btree_create_node(void *item)
{
  btree_t	*new_node;

  if ((new_node = malloc(sizeof(new_node))) == NULL)
    {
      return (NULL);
    }
  new_node->left = NULL;
  new_node->right = NULL;
  new_node->item = item;
  return (new_node);
}
