#include<stdio.h>
int main()
{
int i,j,n=5;
char ch;


for(i=0;i<n;i++){
    
    for(j=0;j<n-i-1;j++){
        printf(" ");
    }
    for(ch='A';ch<='A'+i;ch++){
        printf("%c",ch);
        }
    for(ch='A'+i-1;ch>='A';ch--){
         printf("%c",ch);
        }
    

    printf("\n");

    }
    return 0;
    
}
