/* reverse Polish calculator - getop function */

#include <stdio.h>
#include <ctype.h>
#include "ch4-Calc.h"


/* getop: get next operator or numeric operand */
int getop(char s[])
{
   int i,c;

   while( (s[0] = c = getch()) == ' ' || c == '\t' )
     ;

   s[1] = '\0';
   if ( !isdigit(c) && c != '.' )
     return(c);  /* not a number */
   i = 0;
   if ( isdigit(c) ) /* collect the integer part */
     while ( isdigit(s[++i] = c = getch()) )
       ;
   if ( c == '.' ) /* collect the fraction part */
     while ( isdigit(s[++i] = c = getch()) )
       ;
   s[i] = '\0';
   if ( c != EOF )
     ungetch(c); 
  
   return(NUMBER);
}



