#include<stdio.h>
int main()
{
int i,x,n, result=1;

printf("Enter the base number: ");
scanf("%d",&x);

printf("Enter the exponent: ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
result=result*x;
}
printf("%d^%d= %d",x,n,result);
return 0;
}