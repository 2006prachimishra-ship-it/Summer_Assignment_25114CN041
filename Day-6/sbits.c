#include<stdio.h>
int main()
{
int n,count=0;

printf("Enter the number : ");
scanf("%d",&n);

while(n>0)
{
if(n % 2==1)       //counts the number of one in the binary expansion
count++;
n=n/2;
}
printf("The number of set bits are: %d",count);
return 0;
}

