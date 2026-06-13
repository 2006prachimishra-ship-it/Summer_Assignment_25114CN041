#include<stdio.h>
int main()
{
int n,arr[100],i,first;
printf("Enter the size of the array: ");
scanf("%d",&n);

printf("Enter the array: ");

for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

first=arr[0];
for(i=0;i<n-1;i++){
    arr[i]=arr[i+1];
}
arr[n-1]=first;

printf("Array after left rotation is: ");
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;

}