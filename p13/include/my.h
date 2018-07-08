#ifndef _MY_H_
# define _MY_H_

void	my_putchar(char c);
int	my_isneg(int nb);
int	my_put_nbr(int nb);
void	my_swap(int *a, int *b);
int	my_putstr(void *str);
int	my_strlen(char const *str);
int	my_getnbr(char const *str);
void	my_sort_int_array(int *tab, int size);
int	my_compute_power_rec(int nb, int power);
int	my_compute_square_root(int nb);
int	my_is_prime(int nb);
int	my_find_prime_sup(int nb);
char	*my_strcpy(char *dest, char const *src);
char	*my_strncpy(char *dest, char const *src, int n);
char	*my_revstr(char *str);
char	*my_strstr(char *str, char const *to_find);
int	my_strcmp(char const *s1, char const *s2);
int	my_strncmp(char const *s1, char const *s2, int n);
char	*my_strupcase(char *str);
char	*my_strlowcase(char *str);
char	*my_strcapitalize(char *str);
int	my_str_isalpha(char const *str);
int	my_str_isnum(char const *str);
int	my_str_islower(char const *str);
int	my_str_isupper(char const *str);
int	my_str_isprintable(char const *str);
int	my_showstr(char const *str);
int	my_showmem(char const *str, int size);
char	*my_strcat(char *dest, char const *src);
char	*my_strncat(char *dest, char const *src, int nb);
int	my_factorielle_it(int nb);
int	my_factorielle_rec(int nb);
int	my_find_prime_sup(int nb);
int	my_getnbr_base(char const *str, char const *base);                         
int	my_power_it(int nb, int power);
int	my_putnbr_base(int nbr, char const *base);
int	my_showstr(char const *str);
void	my_sort_int_array(int *tab, int size);
char	*my_strdup(char const *src);
char	*concat_params(int n, char **params);
int	my_show_word_array(char * const * tab);
char	**my_str_to_word_array(char const *str);
int	my_sort_word_array(char **tab);
int	my_advanced_sort_word_array(char **tab, int (*cmp)
				    (char const *, char const *));

#endif /* _MY_H_ */
