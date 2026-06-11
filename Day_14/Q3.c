#include<stdio.h>
int main()
{
int i,n,arr[100],largest,secondLargest;

printf("Enter the size of array: ");
scanf("%d",&n);

printf("Enter the elements of array: ");

for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

largest=arr[0];
for(i=1;i<n;i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
     }
secondLargest=arr[0];
for(i=0;i<n;i++){
    if(arr[i]>secondLargest && arr[i]!=largest){
    secondLargest=arr[i];
    }
     }
printf("Second largest element is: %d",secondLargest);

return 0;
    }