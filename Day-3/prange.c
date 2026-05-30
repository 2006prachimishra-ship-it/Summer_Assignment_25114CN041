#include <stdio.h>
int main()
{
int i,j,start,end,flag;

printf("Enter the starting number= ");
scanf("%d",&start);
printf("Enter the ending number= ");
scanf("%d",&end);

printf("The given Prime numbers are=\n");

for(i=start;i<=end;i++)
{
if(i>1)

{flag=1;
for(j=2;j<i;j++)
{
if(i%j==0)
{
    flag=0;
    break;
}
}
if (flag==1){
printf("%d\n",i);
}
 }
}

return 0;
}
