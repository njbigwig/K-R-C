/* count lines in input 

  On a PC running Windows, EOL via a keyboard can be generated by CTRL-Z

   Changed main to int and added a return value to avoid compiler warnings

    compiled by:
      bcc32c ch1-LineCount.c [ENTER]

 */

#include <stdio.h>


int main()
{
    int c, nl;

    nl = 0;

    while ( (c = getchar()) != EOF )
    {
       if ( c == '\n')
         ++nl;
    }

    printf("%d\n", nl);   

    return (0);
}
