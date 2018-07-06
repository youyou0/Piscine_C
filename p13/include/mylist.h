#ifndef _MYLIST_H_
# define _MYLIST_H_

typedef struct		linked_list
{
  void			*data;
  struct linked_list	*next;
}			linked_list_t;

linked_list_t	*my_params_to_list(int ac, char *const *av);
int		my_list_size(linked_list_t const *begin);
void		my_rev_list(linked_list_t **begin);
int		my_apply_on_nodes(linked_list_t *begin,
				  int (*f)(void *));
int		my_apply_on_matching_nodes(linked_list_t *begin,
					   int (*f)(),
					   void const *data_ref,
					   int (*cmp)());
int		my_delete_nodes(linked_list_t **begin,
				void const *data_ref, int (*cmp)());
void		my_concat_list(linked_list_t **begin1,
			       linked_list_t **begin2);
void		my_sort_list(linked_list_t **begin, int (*cmp)());
void		my_add_in_sorted_list(linked_list_t **begin,
				      void *data, int (*cmp)());
void		my_merge(linked_list_t **begin1,
			 linked_list_t *begin2, int (*cmp)());

#endif /* _MYLIST_H_ */
