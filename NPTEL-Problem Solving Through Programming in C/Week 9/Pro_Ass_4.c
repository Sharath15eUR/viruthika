#include <stdio.h>
int main() {
  int array[100], n, c;
  scanf("%d", &n); // n is number of elements in the array.
  for (c = 0; c < n; c++) {
    scanf("%d", &array[c]);
  }
int j=n-1,t=0;
for(c=0;c<n/2;c++)
{
  t=array[c];
  array[c]=array[j];
  array[j]=t;
  j--;
}
