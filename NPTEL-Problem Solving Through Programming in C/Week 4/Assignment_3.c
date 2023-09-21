#include<stdio.h>
void main()
{
int n;
long int fact;  /* n is the number whose factorial we have to find and fact is the factorial */
scanf("%d",&n);  /* The value of n is taken from test cases */
fact=1;
int i=1;
while(i<=n)
    {
        fact*=i;
        i++;
    }
    printf("The Factorial of %d is : %ld",n,fact);
}
