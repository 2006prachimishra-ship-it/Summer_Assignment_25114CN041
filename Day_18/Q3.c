#include<stdio.h>
int main()
{
int i,n,key,arr[100];

printf("Enter the size of array: ");
scanf("%d",&n);

printf("Enter the elements of the array: ");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

printf("Enter the element to be searched: ");
scanf("%d",&key);

int start=0;
int end=n-1;
int mid=start+(end-start)/2;

while(end>start)
{
if(arr[mid]==key){
    printf("The index of %d is %d",key,mid);
return 0;
}
if(arr[mid]<key){
    start=mid+1;
}
else{
    end=mid-1;
}
 mid=start+(end-start)/2;
}

}
