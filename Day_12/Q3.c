#include<stdio.h>
int fibonacci(int n)
{
int a=0,b=1,c,i;
for(i=0;i<n;i++)
{printf("%d ",a );
c=a+b;
a=b;
b=c;
}
}
int main()
{
int n,fib;
printf("Enter the number: ");
scanf("%d",&n);

fib=fibonacci(n);
return 0;
}