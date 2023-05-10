/* test power function

  Changed main to int and added a return value to avoid compiler warnings

    compiled by:
      bcc32c ch1-Functionsv1.c [ENTER]

 */

#include <stdio.h>

int power(int base, int n);

int main()
{
  int i;

  for (i = 0; i < 10; ++i)
    printf("%d %d %d\n",i, power(2,i), power(-3,i));

  return (0);
}

/* power: raise base to the n-th power; n >= 0 version 1*/
int power(int base, int n)
{
    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
      p = p * base;
    return(p);
}
