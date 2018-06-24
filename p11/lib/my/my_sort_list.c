# include <stdlib.h>
# include "my.h"
# include "mylist.h"

linked_list_t	*my_tail_element(linked_list_t *list)
{
  while (list && list->next)
    {
      list = list->next;
    }
  return (list);
}

void		my_elements_swap(linked_list_t **prev,
				 linked_list_t **current, linked_list_t **end)
{
  linked_list_t	*tmp;

  if (*prev)
    {
      (*prev)->next = (*current)->next;
    }
  tmp = (*current)->next;
  (*current)->next = NULL;
  (*end)->next = *current;
  *end = *current;
  *current = tmp;
}

linked_list_t	*partition(linked_list_t *head, linked_list_t *tail,
			   linked_list_t **new_head, linked_list_t **new_tail, int (*cmp)())
{
  linked_list_t	*pivot;
  linked_list_t	*prev;
  linked_list_t	*current;
  linked_list_t	*end;

  pivot = tail;
  prev = NULL;
  current = head;
  end = pivot;
  while (current != pivot)
    {
      if ((*cmp)(current->data, pivot->data) < 0)
	{
	  if (!(*new_head))
	    *new_head = current;
	  prev = current;
	  current = current->next;
	}
      else
	my_elements_swap(&prev, &current, &end);
    }
  if (!(*new_head))
    *new_head = pivot;
  (*new_tail) = end;
  return (pivot);
}

linked_list_t	*my_qsort_list(linked_list_t *head, linked_list_t *tail, int (*cmp)())
{
  linked_list_t	*new_head;
  linked_list_t	*new_tail;
  linked_list_t	*pivot;
  linked_list_t	*tmp;

  new_head = NULL;
  new_tail = NULL;
  if (!head || head == tail)
    return (head);
  pivot = partition(head, tail, &new_head, &new_tail, cmp);
  if (new_head != pivot)
    {
      tmp = new_head;
      while (tmp->next != pivot)
	{
	  tmp = tmp->next;
	}
      tmp->next = NULL;
      new_head = my_qsort_list(new_head, tmp, cmp);
      tmp = my_tail_element(new_head);
      tmp->next = pivot;
    }
  pivot->next = my_qsort_list(pivot->next, new_tail, cmp);
  return (new_head);
}

void		my_sort_list(linked_list_t **begin, int (*cmp)())
{
  *begin = my_qsort_list(*begin, my_tail_element(*begin), cmp);
}
