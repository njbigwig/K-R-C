/* count lines, words, and characters in input

  On a PC running Windows, EOF via a keyboard can be generated by CTRL-Z

   Changed main to int and added a return value to avoid compiler warnings

    compiled by:
      bcc32c ch1-WordCount.c [ENTER]

    ch1-WordCount < ch1-HelloWorld.c
    18 33 251

 */

#include <stdio.h>

#define IN 1   /* inside a word */
#define OUT 0  /* outside a word */


int main()
{
    int c, nl, nw, nc, state;

    state = OUT;

    nl = nw = nc = 0;
    while ( (c = getchar()) != EOF )
    {
      ++nc;
      if ( c == '\n')
        ++nl;
      if ( c == ' ' || c == '\n' || c == '\t' )
        state = OUT;
      else if ( state == OUT )
      {
        state = IN;
        ++nw;
      }
    }
    printf("%d %d %d\n", nl, nw, nc); 

    return (0);
}
