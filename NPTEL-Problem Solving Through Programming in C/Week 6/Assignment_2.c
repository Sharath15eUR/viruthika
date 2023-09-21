#include<stdio.h>
 
int main() {
   int arr[20], i, n;
 
   scanf("%d", &n); /* Accepts the number of elements in the array */

  for (i = 0; i < n; i++) 
     scanf("%d", &arr[i]); /*Accepts the elements of the array */
int a[20];
for (i = 0; i < n; i++) 
{
  a[i]=arr[i];
}
int j=n-1;
for(i=0;i<n;i++)
{
  arr[i]=a[j];
  j--;
}
for (i = 0; i < n; i++) {
      printf("%d\n", arr[i]); // For printing the array elements 
   }
 
   return (0);
}
