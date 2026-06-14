#include <stdio.h>

int main()
{
int arr[] = {1, 2, 4, 5};
int n = 5;  
int size = 4;

int sum = 0, total, i;

for(i = 0; i < size; i++)
    {
        sum += arr[i];
    }

total = n * (n + 1) / 2;

printf("Missing number = %d", total - sum);

return 0;
}