# include <stdlib.h>
# include "btree.h"

void		*btree_search_item(btree_t const *root,
				   void const *data_ref, int (*cmpf)())
{
  if (root)
    {
      btree_search_item(root->left, data_ref, cmpf);
      if ((*cmpf)(root->item, data_ref) == 0)
	{
	  return (root->item);
	}
      btree_search_item(root->right, data_ref, cmpf);
    }
  return (NULL);
}
