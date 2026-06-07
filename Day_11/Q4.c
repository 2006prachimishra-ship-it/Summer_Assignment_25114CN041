#include<stdio.h>

int fact(int n)
{
int fac=1,i;
for(i=1;i<=n;i++){
    fac=fac*i;
}
return fac;

}
int main()
{
int n,factorial;
printf("Enter the number: ");
scanf("%d",&n);

factorial=fact(n);
printf("The factorial of %d is %d",n,factorial);
return 0;
}