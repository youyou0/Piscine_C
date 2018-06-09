int	my_strlen(char *str);

void	my_char_swap(char *a, char *b)
{
  char	mem;

  mem = *a;
  *a = *b;
  *b = mem;
}

char	*my_revstr(char *str)
{
  int	end;
  int	start;
  
  start = 0;
  end = my_strlen(str) - 1;
  while (start < end)
    {
      my_char_swap(&str[start], &str[end]);
      start += 1;
      end -= 1;
    }
  return (str);
}
