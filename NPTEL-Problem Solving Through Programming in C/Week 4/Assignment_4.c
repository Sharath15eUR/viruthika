#include <stdio.h>  
void main()
{
int N, sum=0; 
scanf("%d", &N); /* The value of N is taken from the test cases */
for(int i=1;i<=N;i++)
{
  int x=i;
  if(i%2==0)
  {
    sum=sum+x;
  }
}
printf("Sum = %d", sum);
}
