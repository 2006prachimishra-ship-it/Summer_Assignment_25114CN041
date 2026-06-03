#include<stdio.h>
long long factorial(int n)
{
if (n==0 || n==1)
return 1;

return n*factorial(n-1);
}
int main()
{
int n;

printf("Enter the number: ");
scanf("%d",&n);

printf("%lld", factorial(n));

return 0;
}