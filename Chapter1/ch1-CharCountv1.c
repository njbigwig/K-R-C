/* count characters in input; 1st version

  On a PC running Windows, EOF via a keyboard can be generated by CTRL-Z

   Changed main to int and added a return value to avoid compiler warnings

    compiled by:
      bcc32c ch1-CharCountv1.c [ENTER]

 */

#include <stdio.h>


int main()
{
    long nc;

    nc = 0;
    
    while ( getchar() != EOF )
       ++nc;  
    printf("%ld\n", nc);

    return (0);
}
