#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	my_putstr(char *str);
int	my_put_nbr(int n);
char	*my_strcpy(char *dest, char const *src);
char	*my_revstr(char *str);
int	my_strcmp(char const *s1, char const *s2);
int	my_strncmp(char const *s1, char const *s2, int n);
char	*my_strstr(char *str, char const *to_find);
char	*my_strupcase(char *str);
char	*my_strlowcase(char *str);
char	*my_strcapitalize(char *str);
int	my_putnbr_base(int nbr, char const *base);
int	my_getnbr_base(char const *str, char const *base);
int	my_showstr(char const *str);
int	my_showmem(char const *str, int size);
int	my_strlen(char *str);

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	main()
{
  char	dest[5];
  char	*src;
  char	*to_find;
  char	str[] = "hey, how are you? 42WORds forty-two; fifty+one";

  /*
  src = "abcd";
  my_putstr("MY_STRCPY : \nSrc: ");
  my_putstr(src);
  my_putstr("\nDest: ");
  //  my_putstr(my_strcpy(dest, src));
  my_putchar('\n');
  */

  if ((src = (char *) malloc(sizeof(char) * 4)) == NULL)
    return (1);
  src[0] = 'a';
  src[1] = 'b';
  src[2] = 'c';
  src[3] = 'd';
  src[4] = 0;

  //my_putstr(my_revstr(src));

  to_find = "abcd";
  printf("%s\n", my_strstr(src, to_find));
  to_find = "abcd";
  printf("%d\n", my_strcmp(src, to_find));
  to_find = "a";
  printf("%d\n", my_strcmp(src, to_find));
  to_find = "dcba";
  printf("%d\n", my_strcmp(src, to_find));

  printf("%s\n", my_strupcase(src));
  printf("%s\n", my_strlowcase(src));
  printf("%s\n", my_strcapitalize(str));
  my_putnbr_base(1, "01");
  my_putnbr_base(-1, "01");
  my_putnbr_base(1000, "01");
  my_putnbr_base(1000, "0123456");
  my_putnbr_base(1000, "012345678");
  my_putnbr_base(1000, "0123456789ABCDEF");
  my_putnbr_base(1000, "0123456789ABCDEFGHIJKLM");
  my_putnbr_base(-1000, "01");
  my_putnbr_base(-1000, "0123456");
  my_putnbr_base(-1000, "012345678");
  my_putnbr_base(-1000, "0123456789ABCDEF");
  my_putnbr_base(-1000, "0123456789ABCDEFGHIJKLM");

  printf("%d\n", my_getnbr_base("01111101000", "01"));
  printf("%d\n", my_getnbr_base("2626", "0123456"));
  printf("%d\n", my_getnbr_base("1331", "012345678"));
  printf("%d\n", my_getnbr_base("03E8", "0123456789ABCDEF"));
  printf("%d\n", my_getnbr_base("01KB", "0123456789ABCDEFGHIJKLM"));
  
  printf("%d\n", my_getnbr_base("-01111101000", "01"));
  printf("%d\n", my_getnbr_base("-2626", "0123456"));
  printf("%d\n", my_getnbr_base("-1331", "012345678"));
  printf("%d\n", my_getnbr_base("-03E8", "0123456789ABCDEF"));
  printf("%d\n", my_getnbr_base("-01KB", "0123456789ABCDEFGHIJKLM"));

  my_showstr("I like \n ponies!");
  src = "hey guys show mem is cool you can do some pretty neat stuff";
  my_showmem(src, my_strlen(src) + 25);
  return (0);
}
