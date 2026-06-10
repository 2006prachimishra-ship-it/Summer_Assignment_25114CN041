#include<stdio.h>
int main()
{int n,i;
printf("Enter the number of elements of an array: ");
scanf("%d",&n);

int arr[n];

printf("The elements of the array are: ");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}
