#ifndef _BTREE_H_
# define _BTREE_H_

typedef struct	btree
{
  struct btree	*left;
  struct btree	*right;
  void		*item;
}		btree_t;

btree_t		*btree_create_node(void *item);

# endif /* _BTREE_H_ */
