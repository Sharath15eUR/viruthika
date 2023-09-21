#include <stdio.h>
int main()
{
int N; 
scanf("%d",&N); /* An integer number taken as input from test cases */
int x=N;
int sum=0;
for(int i=1;i<N;i++)
{
  if(x%i==0)
  {
    sum+=i;
  }
}
if(sum==N)
{
  printf("%d is a perfect number.",N);
}
else
{
  printf("%d is not a perfect number.",N);
}
}
