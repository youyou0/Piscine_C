# define DIGITS 3

void	my_putchar(char c);

void	display_num(char digits[DIGITS])
{
  my_putchar(digits[0]);
  my_putchar(digits[1]);
  my_putchar(digits[2]);
  if (digits[0] != '7')
    {
      my_putchar(',');
      my_putchar(' ');
    }
}

int	my_aff_comb()
{
  char	digits[DIGITS];

  digits[0] = '0';
  digits[1] = '1';
  digits[2] = '2';
  while (digits[0] != '8')
    {
      while (digits[1] != '9')
	{
	  while (digits[2] != ('9' + 1))
	    {
	      display_num(digits);
	      digits[2] += 1;
	    }
	  digits[1] += 1;
	  digits[2] = digits[1] + 1;
	}
      digits[0] += 1;
      digits[1] = digits[0] + 1;
      digits[2] = digits[1] + 1;
    }
  return (0);
}

/* void	display_num(char a, char b, char c) */
/* { */
/*   my_putchar(a); */
/*   my_putchar(b); */
/*   my_putchar(c); */
/*   if (a != '7') */
/*     { */
/*       my_putchar(','); */
/*       my_putchar(' '); */
/*     } */
/* } */

/* void	my_rec(char a, char b, char c) */
/* { */
/*   if (c == ('9' + 1)) */
/*     { */
/*       b += 1; */
/*       c = b + 1; */
/*     } */
/*   else if (b == '9') */
/*     { */
/*       a += 1; */
/*       b = a + 1; */
/*       c = b + 1; */
/*     } */
/*   if (a != '8') */
/*     { */
/*       display_num(a, b, c); */
/*       my_rec(a, b, c + 1); */
/*     } */
/* } */

/* int	my_aff_comb() */
/* { */
/*   my_rec('0', '1', '2'); */
/*   return (0); */
/* } */
