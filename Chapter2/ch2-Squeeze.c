/* squeeze: delete all c from s

  Changed main to int and added a return value to avoid compiler warnings. 

    compiled by:
      bcc32c ch2-Squeeze.c [ENTER]
    
 */

#include <stdio.h>

void squeeze(char s[], int c)
{
   int i, j;

   for ( i = j = 0; s[i] != '\0'; i++)
     if ( s[i] != c )
      s[j++] = s[i];
    s[j] = '\0';
}


int main()
{

  char HelloWorldString[] = "Hello World!";

  printf("String before squeeze: %s\n", HelloWorldString);
  squeeze(HelloWorldString, 'l');
  printf("String after squeeze: %s\n", HelloWorldString);

  return (0);
}




