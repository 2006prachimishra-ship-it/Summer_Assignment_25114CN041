#include<stdio.h>
int main()
{
int n,i;
printf("Enter the size of array: ");
scanf("%d",&n);

int arr[n];
int sum=0,avg;

printf("The elements of the array are: ");

for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
} 

for(i=0;i<n;i++){
    sum=sum+arr[i];
}
avg=sum/n;
printf("sum=%d ",sum);
printf("avg=%d",avg);
return 0;
}