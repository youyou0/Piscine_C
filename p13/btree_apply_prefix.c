# include <stdlib.h>
# include "btree.h"

void		*btree_apply_prefix(btree_t *root, int (*applyf)(void *))
{
  btree_t	*tmp;

  if (root)
    {
      (*applyf)(root->item);
      btree_apply_prefix(root->left, applyf);
      btree_apply_prefix(root->right, applyf);
    }
}
