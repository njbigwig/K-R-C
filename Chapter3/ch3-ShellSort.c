/* shellsort: sort v[0]...v[n-1] into increasing order

    Changed main to int and added a return value to avoid compiler warnings. 

    compiled by:
      bcc32c ch3-ShellSort.c [ENTER]       
    
 */

#include <stdio.h>

void shellsort(int v[], int n)
{
   int gap, i, j, temp;

   for ( gap = n/2; gap > 0; gap /= 2 )
     for ( i = gap; i < n; i++ )
        for ( j = i-gap; j >= 0 && v[j] > v[j+gap]; j -= gap )
        {
          temp = v[j];
          v[j] = v[j+gap];
          v[j+gap] = temp;
        }     
}

int main()
{
  int n;
  int NumbersToSort[10] = {201, 200, 0, 10, 66, 1, 15, 45, 31, 119};

  printf("Before sorting:");
  for ( n=0; n< 10; n++)
    printf(" %d", NumbersToSort[n]);
  printf("\n");

  shellsort(NumbersToSort, 10);

  printf("After sorting:");
  for ( n=0; n< 10; n++)
    printf(" %d", NumbersToSort[n]);
  printf("\n");

  return (0);
}