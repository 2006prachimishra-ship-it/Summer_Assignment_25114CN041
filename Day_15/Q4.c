#include <stdio.h>
int main()
{
int n,arr[100],i,j,found=0;
printf("Enter the size of array: ");
scanf("%d",&n);

printf("Enter the elements of the array: ");

for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
    if(arr[i]==arr[j]){
    printf("%d",arr[i]);
    found=1;
    break;
    }
  }
}
if(found==0){
    printf("No common elements found");
}
return 0;
}