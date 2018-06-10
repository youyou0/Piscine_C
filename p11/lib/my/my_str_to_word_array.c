# include <stdlib.h>
# include "my.h"

static int	mem = 0;

int		my_char_isalpha(char const c)
{
  if (c > 122 || (c < 65 && c > 57) ||
      c  < 48 || (c > 90 && c < 97))
    return (0);
  return (1);
}

char		*capture_next_word(char const *str)
{
  int		i;
  char		*new_word;

  i = 0;
  while (str[mem + i] && my_char_isalpha(str[mem + i]))
    {
      i += 1;
    }
  if (!(new_word = (char *) malloc(sizeof(char) * (i + 1))))
    return (NULL);
  my_strncpy(new_word, &str[mem], i);
  while (str[mem + i] && !my_char_isalpha(str[mem + i]))
    i += 1;
  mem += i;
  return (new_word);
}

int		count_words(char const *str)
{
  int		i;
  int		n_words;

  i = 0;
  n_words = 0;
  while (str[i])
    {
      if (!my_char_isalpha(str[i]) && str[i])
	{
	  while (!my_char_isalpha(str[i]) && str[i])
	    i += 1;
	  n_words += 1;
	}
      if (str[i])
	i += 1;
    }
  return (n_words);
}

char		**my_str_to_word_array(char const *str)
{
  char		**word_array;
  int		n_words;
  int		i;

  n_words = count_words(str);
  i = 0;
  mem = 0;
  if (!(word_array = (char **) malloc(sizeof(char*) * (n_words + 1))))
    return (NULL);
  while (i < n_words)
    {
      word_array[i] = capture_next_word(str);
      i += 1;
    }
  word_array[i] = 0;
  return (word_array);
}
