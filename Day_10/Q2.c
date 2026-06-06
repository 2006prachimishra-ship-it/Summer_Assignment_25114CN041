#include<stdio.h>
int main()
{
int i,j,n=5;

for(i=n-1;i>=0;i--){
    for(j=0;j<n-i-1;j++)
{
    printf(" ");
}
for(j=0;j<i;j++)
{
    printf("*");
}
for(j=0;j<=i;j++)
{
    printf("*");
}

printf("\n");
}
return 0;
}