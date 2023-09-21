#include <stdio.h>
int main()
{
int N;
scanf("%d",&N); /* The value of N is taken from the test case data */
int x=N;
int flag=1;
while(x!=1)
{
  if(x%2==0)
  {
    flag=0;
    x=x/2;
  }
  else
  {
    flag=1;
    break;
  }
}
if(flag==0)
{
  printf("%d is a number that can be expressed as power of 2.",N);
}
else
{
  printf("%d cannot be expressed as power of 2.",N);
}
}
