#include<stdio.h>
int main()
{
int i,j,n,a[10][10],found=1;

printf("Enter the order of the matrix: ");
scanf("%d",&n);

printf("Enter the elements of the matrix: ");
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&n);
    }
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(a[i][j] != a[j][i]){
            found=0;
            break;
        }
    }
}
if (found==1){
    printf("Matrix is symmetric");
}
else{
    printf("Matrix is not symmetric");
}
return 0;

}