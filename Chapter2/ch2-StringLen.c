/* determining the length of a string

  Changed main to int and added a return value to avoid compiler warnings. Function changed to mystrlen to avoid 
  conflict with native function.

    compiled by:
      bcc32c ch2-StringLen.c [ENTER]

    
 */

#include <stdio.h>


int mystrlen(char s[]);


int main()
{
  printf("Length of \"Hello World!\" = %d\n", mystrlen("Hello World!"));
  printf("Length of \"\" = %d\n", mystrlen(""));

  return (0);
}

/* mystrlen: return length of s */
int mystrlen(char s[])
{
  int i;

  i = 0;
  while ( s[i] != '\0')
    ++i;
  return(i);
}
