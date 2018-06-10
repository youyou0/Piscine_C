void	my_add(int a, int b);
void	my_sub(int a, int b);
void	my_mul(int a, int b);
void	my_div(int a, int b);
void	my_mod(int a, int b);
void	my_usage(int a, int b);

struct	operator
{
  char	*op;
  void	(*func)(int, int);
};

const struct operator OPERATORS_FUNCS[] =
  {
    {"+", &my_add},
    {"-", &my_sub},
    {"/", &my_div},
    {"*", &my_mul},
    {"%", &my_mod},
    {"", &my_usage}
  };
