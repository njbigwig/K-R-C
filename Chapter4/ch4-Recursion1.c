/* printd: print n in decimal

  Changed main to int and added a return value to avoid compiler warnings

    compiled by:
      bcc32c ch4-Recursion1.c [ENTER]    

 */

#include <stdio.h>


void printd(int n)
{
  if ( n < 0 )
  {
    putchar('-');
    n = -n;
  }
  if ( n / 10 )
    printd(n / 10);
  putchar(n % 10 + '0');
}


int main()
{ 

  printd(123);
  
  return (0);
}