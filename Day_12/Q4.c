#include<stdio.h>
int perfect(int num)
{
int i,sum=0;
for(i=1;i<num;i++)
{
if(num%i==0)
sum=sum+i;
}
if(sum==num)
printf("The number is a perfect number");
else
printf("The number is not a perfect number");
return sum;
}
int main()
{
int num;

printf("Enter the number: ");
scanf("%d",&num);

perfect(num);
return 0;
}