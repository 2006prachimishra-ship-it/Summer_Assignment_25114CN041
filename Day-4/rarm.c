#include<stdio.h>
int main()
{
int start,end,temp,sum,rem,num;

printf("Enter the starting number: ");
scanf("%d",&start);

printf("Enter the ending number: ");
scanf("%d",&end);

for(num=start;num<=end;num++)
{
sum=0;
temp=num;

while(temp>0)
{
rem=temp%10;
sum=sum+rem*rem*rem;
temp=temp/10;
}
if(sum==num)
printf("%d ",num);

}
return 0;
}
