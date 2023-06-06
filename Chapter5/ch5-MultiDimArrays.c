/*  
  Changed main to int and added a return value to avoid compiler warnings

    compiled by:
      bcc32c ch5-MultiDimArrays.c [ENTER]    

 */

#include <stdio.h>

char daytab[2][13] = {
  {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, /* non-leap year */
  {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}  /* leap year */
};

/* day_of_year: set day of year from month & day */
int day_of_year(int year, int month, int day)
{
   int i, leap;

   leap =  (year % 4 == 0 && year % 100) != 0 || year % 400 == 0;

   for ( i = 1; i < month; i++)
     day += daytab[leap][i];

    return(day);
}


/* month_day: set month, day from day of the year */
void month_day(int year, int yearday, int *pmonth, int *pday)
{
    int i, leap;

    leap =  (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

    for ( i = 1; yearday > daytab[leap][i]; i++ )
      yearday -= daytab[leap][i];

    *pmonth = i;
    *pday = yearday;

}


/* use the functions */
int main()
{ 
  int month, day, year, yearday;

  printf("Enter YEAR YEAR-DAY: ");
  scanf("%d %d", &year, &yearday);
  month_day(year, yearday, &month, &day);
  printf("Month-Date: %d-%d\n",month, day);

  printf("Enter MONTH DAY YEAR: ");
  scanf("%d %d %d", &month, &day, &year);
  printf("YEAR-DAY: %d\n", day_of_year(year, month, day));

  return(0);
}