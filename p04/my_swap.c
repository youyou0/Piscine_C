/*
** my_swap.c for  in 
** 
** Made by Youness Hamdi
** Login   <youness.hamdi@zoho.com>
** 
** Started on  Sat May 26 15:46:52 2018 Youness Hamdi
** Last update Sat May 26 19:12:29 2018 Youness Hamdi
*/

void	my_swap(int *a, int *b)
{
  int	mem;

  mem = *a;
  *a = *b;
  *b = mem;
}
