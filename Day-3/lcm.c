#include<stdio.h>
int main()
{
int n1,n2,a,b,temp,lcm,gcd;
printf("Enter the first number = ");
scanf("%d",&n1);
printf("Enter the second number = ");
scanf("%d",&n2);

a=n1;
b=n2;

while(b!=0)
{
temp=b;
b=a%b;
a=temp;
}
gcd=a;

lcm = n1*n2/gcd;

printf("The lcm of %d and %d is :%d",n1,n2,lcm);

return 0;
}