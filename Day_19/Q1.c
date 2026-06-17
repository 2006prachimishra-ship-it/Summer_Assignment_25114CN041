#include<stdio.h>
int main()
{
int i,j,r,c;
printf("Enter the rows and columns of the matrix: ");
scanf("%d%d",&r,&c);

int a[r][c],b[r][c],sum[r][c];
printf("Enter the elements of first matrix: ");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
    }
}

printf("Enter the elements of second array: ");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&b[i][j]);
    }
}

printf("Sum of the matrices is:\n ");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        sum[i][j] = a[i][j] + b[i][j];
    }
}

for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d ",sum[i][j]);
    }
    printf("\n");
}
return 0;
}