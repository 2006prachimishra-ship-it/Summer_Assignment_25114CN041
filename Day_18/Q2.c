#include<stdio.h>
int main()
{
int i,j,n,arr[100],temp;

printf("Enter the size of array: ");
scanf("%d",&n);

printf("Enter the elements of array:");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n-1;i++){
    int minindex=i;
    for(j=i+1;j<n;j++){
        if(arr[minindex]>arr[j]){
            temp=arr[j];
            arr[j]=arr[minindex];
            arr[minindex]=temp;
        }
    }
}
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
    
}