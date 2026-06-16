#include<stdio.h>
int main()
{
int i,j,n,arr[100],temp;

printf("Enter the size of array: ");
scanf("%d",&n);

printf("Enter the elements of the array: ");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

for(i=1;i<n;i++){
    for(j=0;j<n+1;j++){
        if(arr[j]>arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
  }
}

for(i=0;i<n;i++)
{printf("%d ",arr[i]);
}
return 0;
}