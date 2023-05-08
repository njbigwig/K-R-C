/* Convert Fahrenheit to Celsius based on this formula:

   C = (5.0/9.0)(F-32.0)

   printf Fahrenheit-Celsius table - floating-point version

     for fahr, 20, ..., 300

    Changed main to int and added a return value to avoid compiler warnings

    compiled by:
      bcc32c ch1-F2CwithFloatingPoint.c [ENTER]

*/

#include <stdio.h>

/* print Fahrenheit-Celsius table 
    for far = 0, 20, ..., 300 */

int main()
{

    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    while ( fahr <= upper )
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return (0 );
}
