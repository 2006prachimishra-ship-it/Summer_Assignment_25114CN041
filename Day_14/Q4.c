#include<stdio.h>
int main()
{
int i,j,n,arr[100];
printf("Enter the size of the array: ");
scanf("%d",&n);

printf("Enter the elements of the array: ");

for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

printf("The duplicate elements are: ");

for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
    if(arr[i]==arr[j]){
        printf("%d ",arr[i]);
        break;
    }
  }
}
return 0;
}