#include <stdio.h>

int main()
{int i, j, count,n,arr[100];
int maxFreq = 0, maxElement;

printf("Enter the size of array: ");
scanf("%d",&n);

printf("Enter the elements of the array: ");

for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

for(i = 0; i < n; i++)
    {
        count = 1;

    for(j = i + 1; j < n; j++)
        {
        if(arr[i] == arr[j])
       {
        count++;
        }
        }

        if(count > maxFreq)
        {
        maxFreq = count;
        maxElement = arr[i];
        }
    }

    printf("Element with maximum frequency = %d\n", maxElement);
    printf("Frequency = %d", maxFreq);

    return 0;
}