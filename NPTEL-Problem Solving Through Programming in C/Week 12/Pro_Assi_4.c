#include<stdio.h>
#include<stdlib.h>
void main()
{
 int i,n;
 scanf("%d", &n);
     int *A = (int*)malloc(n * sizeof(int));
    int *B = (int*)malloc(n * sizeof(int));
    int *c = (int*)malloc(n * sizeof(int));
  for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

   for(int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }
for(int i = 0; i < n; i++) {
        c[i] = A[i] + B[i];
    }
printf("Result is\n");

 for(i=0; i<n; i++)
 {
  printf("%d\n",*(c+i));
 }
}
