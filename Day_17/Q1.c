#include<stdio.h>
int main()
{
int arr1[100],arr2[100],i,n1,n2;

printf("Enter size of first array:");
scanf("%d",&n1);

printf("Enter the elements of first array:");

for(i=0;i<n1;i++){
    scanf("%d",&arr1[i]);
}

printf("Enter the size of second array:");
scanf("%d",&n2);

printf("Enter the elements of secomd array:");

for(i=0;i<n2;i++){
    scanf("%d",&arr2[i]);
}

int merge[n1+n2];
for(i=0;i<n1;i++){
    merge[i]=arr1[i];
}
for(i=0;i<n2;i++){
    merge[n1+i]=arr2[i];
}
printf("Merged array is:");

for(i=0;i<n1+n2;i++){
    printf("%d ",merge[i]);
}
return 0;
}