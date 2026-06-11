#include<stdio.h>
int main()
{
int i,n,found=0,arr[100],key;
printf("Enter the size of array: ");
scanf("%d",&n);

printf("Enter the elements of the array: ");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

printf("Enter the element to be searched: ");
scanf("%d",&key);

for(i=0;i<n;i++){
    if(arr[i]==key){
    printf("The index of element is: %d",i);
    found=1;
    break;
}
}
if(found==0)
{printf("Element not found");}
return 0;

}
