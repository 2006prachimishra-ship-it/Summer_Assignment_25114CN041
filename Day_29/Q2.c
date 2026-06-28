#include<stdio.h>
int main()
{
int arr[100],i,choice,n,sum =0,max=0;

while(choice != 5)
{
printf("\n-----ARRAY OPERATION SYSTEM-----\n");
printf("1.Enter array\n");
printf("2.Display array\n");
printf("3.Sum of array\n");
printf("4.Find maximum element\n");
printf("5.Exit\n");

printf("Enter your choice: \n");
scanf("%d",&choice);

switch(choice)
{
case 1:
printf("Enter size of the array: ");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
break;

case 2:
printf("Array elements:\n");
for(i=0;i<n;i++)
{
printf(" %d",arr[i]);
}
printf("\n");
break;

case 3:
for(i=0;i<n;i++)
{
sum = sum + arr[i];
}
printf("The sum of elements of given array is: %d",sum);
break;

case 4:
for(i=0;i<n;i++)
{
if(arr[i] > max)
{
max = arr[i];
}
}
printf("The maximum element of the array is: %d ",max);
break;

case 5:
printf("Exit");
break;

default:
printf("Invalid choice");

}}
return 0;
}