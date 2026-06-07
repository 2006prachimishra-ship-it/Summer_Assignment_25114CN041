#include<stdio.h>

int add(int a,int b)
{int s;
s=a+b;
return s;
}

int main()
{
int n1,n2,sum;

printf("Enter the two numbers:  ");
scanf("%d%d",&n1,&n2);

sum=add(n1,n2);
printf("sum= %d",sum);

return 0;
}
