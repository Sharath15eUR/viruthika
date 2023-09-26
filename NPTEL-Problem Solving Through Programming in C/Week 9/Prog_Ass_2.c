#include <stdio.h>
int linear_search(int[], int, int);
int main()
{
   int array[100], search, c, n, position;
   /* search - element to search, c - counter, n - number of elements in array,
   position - The position in which the element is first found in the list. */
    scanf("%d", &n); // Number of elements in the array is read from the test case data
    for (c = 0; c < n; c++)
    scanf("%d", &array[c]); //Elements of array is read from the test data
    scanf("%d", &search);  
int k=0;
for(c=0;c<n;c++)
{
  if(search==array[c])
     {
       k=1;
       break;
     }
}
if(k==1)
     {
for(c=0;c<n;c++)
{
  if(search==array[c])
  {
    printf("%d is present at location %d.\n",search,(c+1));
    break;
  }
}
}
else
printf("%d is not present in the array.\n",search);
return 0;
}
