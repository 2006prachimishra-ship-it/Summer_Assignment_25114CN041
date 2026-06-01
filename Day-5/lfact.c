#include<stdio.h>
int main()
{
int i,n,largest=0;

printf("Enter the number: ");
scanf("%d",&n);

for(i=2;i<=n;i++)
{
while(n%i==0)
{
largest=i;
n=n/i;
}
 }
 printf("Largest prime factor is :%d",largest);
 
 return 0;
}