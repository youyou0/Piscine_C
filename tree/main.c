# include <unistd.h>
# define SPACE_IT 2
# define STAGE_START 4
# define LEAVES_IT 2

int		draw_space(int n_space)
{
  int		i;

  i = 0;
  while (i <= n_space)
    {
      my_putchar(' ');
      i += 1;
    }
  return (n_space - 1);
}

int		draw_step(int n_leaves)
{
  int		i;

  i = 0;
  while (i < n_leaves)
    {
      my_putchar('*');
      i += 1;
    }
  my_putchar('\n');
  return (n_leaves + LEAVES_IT);
}

int		draw_stage(int n_leaves, int stage, int n_space)
{
  int		i;
  int		j;
  int		tmp;

  i = 0;
  while (i < stage)
    {
      n_space = draw_space(n_space);
      n_leaves = draw_step(n_leaves);
      i += 1;
    }
  return (n_leaves - LEAVES_IT * 2);
}

int		draw_leaves(int round)
{
  int		i;
  int		n_leaves;
  int		stage;
  int		n_space;
  int		space_offset;

  i = 0;
  n_leaves = 1;
  stage = STAGE_START;
  n_space = ((round * round) + (3 * round)) / 2;
  space_offset = 2;
  while (i < round)
    {
      n_leaves = draw_stage(n_leaves, stage, n_space);
      n_space -= space_offset;
      space_offset += 1;
      stage += 1;
      i += 1;
    }
  n_space = ((round * round) + (3 * round)) / 2;
  return (n_space);
}

void		tree(int size)
{
  int		n_space;
  int		i;
  int		j;

  if (size < 1)
    return;
  n_space = draw_leaves(size) - (size / 2);
  i = 0;
  while (i < size)
    {
      draw_space(n_space);
      j = 0;
      while (j < size)
	{
	  my_putchar('|');
	  j += 1;
	}
      my_putchar('\n');
      i += 1;
    }
}
