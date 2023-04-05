/* Convert Fahrenheit to Celsius based on this formula:

   C = (5/9)(F-32)

   This version uses integer variables, so 5/9 was modified to avoid multiplying by 0 due to integer truncation:
     5/9 = 0
     5%9 = 5  C Modus operator

    Changed main to int and added a return value to avoid compiler warnings

    compiled by:
      bcc32c ch1-F2C.c [ENTER]

*/

#include <stdio.h>

/* print Fahrenheit-Celsius table 
    for far = 0, 20, ..., 300 */

int main()
{

    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    while ( fahr <= upper )
    {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }

    return (0 );
}
