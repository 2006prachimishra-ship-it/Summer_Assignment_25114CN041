#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter the order of the matrix: ");
scanf("%d",&n);

int a[n][n];
printf("Enter the elements of the matrix: ");
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
int sum=0;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(i==j){
            sum=sum + a[i][j];
        }
        printf("\n");
    }
}
printf("The sum of diagonal elements of the matrix is: %d ",sum);
return 0;
}
