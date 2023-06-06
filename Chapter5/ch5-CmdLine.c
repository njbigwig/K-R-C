/*  
  Changed main to int and added a return value to avoid compiler warnings

    compiled by:
      bcc32c ch5-CmdLine.c [ENTER]    

 */

#include <stdio.h>


/* echo command-line arguements, 2nd version, argv[0] is always the program name */
int main(int argc, char *argv[])
{ 
  int i;

  /* changed from K-R book, start at command line parameter 0 and print on seperate lines */
  printf("Total Command Line parameters: %d\n", argc);
  for ( i = 0; i < argc; i++ )
    printf("%d: %s\n", i, argv[i]);

  return(0);
}