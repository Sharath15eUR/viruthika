#include <stdio.h>
int main()
{
int n1, n2, n3;
scanf("%d %d %d", &n1, &n2, &n3); 
int res;
if(n1>n2)
{
  if(n1>n3)
  {
    res=n1;
  }
  else
  {
    res=n3;
  }
}
else
{
   if(n2>n3)
  {
    res=n2;
  }
  else
  {
    res=n3;
  }
}
printf("%d is the largest number.", res);
}
