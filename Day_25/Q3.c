#include <stdio.h>
#include <string.h>

int main()
{
char name[10][50], temp[50];
int n, i = 0, j;

printf("Enter number of names: ");
scanf("%d", &n);

printf("Enter names:\n");
while(i < n)
{
scanf("%s", name[i]);
i++;
}

i = 0;
while(i < n - 1)
    {
    j = i + 1;

    while(j < n)
    {
    if(strcmp(name[i], name[j]) > 0)
         {
        strcpy(temp, name[i]);
        strcpy(name[i], name[j]);
        strcpy(name[j], temp);
         }
            j++;
        }

        i++;
    }

printf("Names in alphabetical order:\n");

i = 0;
while(i < n)
{
    printf("%s\n", name[i]);
    i++;
}

return 0;
}