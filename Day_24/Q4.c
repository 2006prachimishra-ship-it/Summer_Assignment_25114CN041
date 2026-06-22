#include <stdio.h>

int main()
{
char str[100];
int i = 0, j, flag;

printf("Enter string: ");
 scanf("%s", str);

while(str[i] != '\0')
{
    flag = 0;
    j = 0;

    while(j < i)
    {
    if(str[i] == str[j])
    {
    flag = 1;
    break;
    }
         j++;
    }

    if(flag == 0)
    {
        printf("%c", str[i]);
    }

    i++;
}

return 0;
}
