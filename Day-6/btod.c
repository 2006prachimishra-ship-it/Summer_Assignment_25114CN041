#include<stdio.h>
int main()
{
int n,rem,place=1,decimal=0;

printf("Enter the binary number: ");
scanf("%d",&n);

while(n>0)
{
rem=n%10;
decimal=decimal+rem*place;
place=place*2;
n=n/10;
}
printf("%d",decimal);
return 0;
}