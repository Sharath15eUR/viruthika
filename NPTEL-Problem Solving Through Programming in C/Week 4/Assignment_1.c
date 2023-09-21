#include <stdio.h>
int main()
{
int n1, n2, n3; 
scanf("%d %d %d", &n1, &n2, &n3); /* where three number are read from the test cases and are stored in the variable n1, n2 and n3 */
int small;
if(n1<n2)
{
  if(n1<n3)
  {
    small=n1;
  }
  else
  {
    small=n3;
  }
}
else
{ if(n2<n3)
  {
    small=n2;
  }
  else
  {
    small=n3;
  }
}
  printf("%d is the smallest number.", small);
}
