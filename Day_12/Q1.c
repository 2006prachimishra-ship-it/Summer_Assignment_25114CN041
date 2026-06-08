#include<stdio.h>
int reverse( int num)
{
int rem,revr=0;
int original=num;
while(num>0){

rem=num%10;
revr=revr*10+rem;
num=num/10;}
if(revr==original){
    printf("Number is in Palindrome");
}
else{
    printf("Number is not in Palindrome");
}


return revr;
}

int main()
{
int num,rev;

printf("Enter the number: ");
scanf("%d",&num);

rev=reverse(num);

return 0;

}