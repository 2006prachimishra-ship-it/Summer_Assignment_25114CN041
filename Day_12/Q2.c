#include<stdio.h>
int armstrong(int num)
{
int rem=0,result=0;
int original=num;
while(num>0){
    rem=num%10;
    result=result+rem*rem*rem;
    num=num/10;
}

if(result==original)
{
printf("The number is an armstrong number");
}
else
{
printf("The number is not an armstrong number");
}
return result;
}

int main()
{
int num,arm;

printf("Enter the number: ");
scanf("%d",&num);

arm=armstrong(num);
return 0;
}