#include<stdio.h>
 int max(int a,int b)
{
if(a>b)
    return a;

else
return b;
}

int main()
{
int n1,n2,maximum;
printf("Enter the two numbers: ");
scanf("%d%d",&n1,&n2);

maximum=max(n1,n2);
printf("The maximum of the two numbers is:%d ", maximum);
return 0;
}