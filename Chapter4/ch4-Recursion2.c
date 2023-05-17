/* qsort: sort v[left] ... v[right] into increasing order

  Changed main to int and added a return value to avoid compiler warnings

    compiled by:
      bcc32c ch4-Recursion2.c [ENTER]    

 */

#include <stdio.h>

/* swap: interchange v[i] and v[j] */
void swap(int v[], int i, int j)
{
  int temp;

  temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}

void qsort(int v[], int left, int right)
{
  int i, last;

  /* changed original code which had this check if parameters indicated 2 or less elements
     if ( left >= right )
       return;
  */
  if ( left < right )
  {
    swap(v, left, (left+right)/2);  /* move partition element */
    last = left;                    /* to v[0] */
    for ( i = left+1; i <= right; i++ ) /* partition */
      if ( v[i] < v[left] )
        swap(v, ++last, i);
    swap(v, left, last); /* restore partition elem */ 
    qsort(v, left, last-1);
    qsort(v, last+1, right);
  }
}

int main()
{ 
  int sortarray[] = {0, 2515, 1001, 16, 10, 87, 2, 99, 1002, 3};
  int i;

  printf("Array BEFORE quicksort\n");
  for (i=0; i< 10; i++)
    printf(" %d", sortarray[i]);
  
  qsort(sortarray, 0, 9);

  printf("\nArray AFTER quicksort\n");
  for (i=0; i< 10; i++)
    printf(" %d", sortarray[i]);

  return (0);
}