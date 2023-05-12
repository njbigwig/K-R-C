/* determining if a year is a leap year, which means that there will be a February 29

  Changed main to int and added a return value to avoid compiler warnings. 

    compiled by:
      bcc32c ch2-LeapYear.c [ENTER]
    
 */

#include <stdio.h>


int main()
{
  int year;

  for ( year = 2020; year < 2050; year++ )
    if ( (year % 4 == 0 && year % 100 != 0) || year % 4000 == 0 )
      printf("%d is a leap year\n", year);
    else
      printf("%d is not a leap year\n", year);

  return (0);
}

