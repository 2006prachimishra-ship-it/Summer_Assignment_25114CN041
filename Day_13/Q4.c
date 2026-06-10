#include<stdio.h>
int main()
{
int i,n;
printf("Enter the size of array: ");
scanf("%d",&n);

int arr[n];
printf("The elements of the array are:");
for(i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
}

int ecount=0,ocount=0;
for(i=0;i<n;i++)
{
    if(arr[i]%2==0)
    ecount+=1;

    else
    ocount+=1;

}
printf("Even no. count=%d\n",ecount);
printf("Odd no. count=%d",ocount);
return 0;

}