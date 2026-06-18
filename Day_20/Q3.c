#include<stdio.h>
int main()
{
int i,j,r,c,a[10][10],sum;

printf("Enter the rows and columns of the matrix: ");
scanf("%d%d",&r,&c);

printf("Enter the elements of the matrix: ");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
    }
}
for (i=0;i<r;i++){
    sum=0;
    for(j=0;j<c;j++){
    sum += a[i][j];
    }
printf("Sum of elements of row %d is %d\n",i+1,sum);
}
return 0;
}
