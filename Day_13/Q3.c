#include<stdio.h>
int main()
{
int i,n;

printf("Enter the size: ");
scanf("%d",&n);

printf("Enter the elements of the array: ");


int arr[n];
for(i=0;i<n;i++){

    scanf("%d",&arr[i]);
}
int largest=arr[0];
int smallest=arr[0];

for(i=0;i<n;i++){
    if(arr[i]>largest)
    largest=arr[i];
    if(arr[i]<smallest)
    smallest=arr[i];
}
printf("The largest no in the array is: %d\n",largest);
printf("The smallest number of the array is:%d",smallest);
return 0;

}