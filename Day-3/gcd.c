#include<stdio.h>
int main()
{
int n1,n2,a,b,temp;

printf("Enter the first number=");
scanf("%d",&n1);
printf("Enter the second number=");
scanf("%d",&n2);
a=n1;
b=n2;
while(b!=0)
{
temp=b;
b=a%b;
a=temp;}

printf("The GCD of %d and %d is:%d",n1,n2,a);
return 0;
}





