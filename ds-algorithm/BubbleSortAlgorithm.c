/* Bubble sort code */
#include <stdio.h>

int main()
{
  int array[100], n, c, d, swap;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use '<' instead of '>' */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c < n; c++)
     printf("%d\n", array[c]);

  return 0;
}

/* insertion sort code */
/*
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    int a[n],key,j,i;
    printf("Enter elements: ");
    for(j=1; j<=n; j++)
    {
        scanf("%d",&a[j]);
    }
    for(j=2; j<=n; j++)
    {
        key=a[j];
        i=j-1;
        while(i>0 && a[i]>key)
        {
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=key;
    }

    printf("In ascending order :  ");
    for(j=1; j<=n; j++)
    {
        printf("%d  ",a[j]);


    }
    return 0;
}
*/

