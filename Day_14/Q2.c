#include<stdio.h>
int main()
{
int n,i,key,count=0,arr[100];

printf("Enter the size of array: ");
scanf("%d",&n);

printf("Enter the elements of the array : ");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }

printf("Enter the element to be searched: ");
scanf("%d",&key);

for(i=0;i<n;i++){
    if(arr[i]==key){
        count++;
    }
}

printf("%d occurs %d times",key,count);

return 0;
}