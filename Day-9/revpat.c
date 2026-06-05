#include<stdio.h>
int main()
{
int i,j,n=5;

for(i=0;i<=n+3;i++){
    for(j=n;j>0;j--){
        printf("*");
        
     }
     n=n-1;
    printf("\n");
}
return 0;
}



