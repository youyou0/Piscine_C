# include <stdlib.h>
# include "my.h"
# include "btree.h"

void		go_left(btree_t **root, void *item, int (*cmpf)())
{
  if ((*root)->left)
    {
      btree_insert_data(&(*root)->left, item, cmpf);
    }
  else
    {
      (*root)->left = btree_create_node(item);
    }
}

void		go_right(btree_t **root, void *item, int (*cmpf)())
{
  if ((*root)->right)
    {
      btree_insert_data(&(*root)->right, item, cmpf);
    }
  else
    {
      (*root)->right = btree_create_node(item);
    }
}

void		btree_insert_data(btree_t **root, void *item, int (*cmpf)())
{
  btree_t	*tmp;

  if (*root)
    {
      tmp = *root;
      if ((*cmpf)(tmp->item, item) > 0)
	{
	  go_left(&tmp, item, cmpf);
	}
      else
	{
	  go_right(&tmp, item, cmpf);
	}
    }
  else
    {
      *root = btree_create_node(item);
    }
}
