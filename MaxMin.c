// Program to find maximum and minimum element in array

#include <stdio.h>
int main()
{
    int arr[100];
    int i,max,min,size;

    printf("Enter size of the array: ");
    scanf("%d", &size);
    
    printf("Enter array elements: ");
    for ( i = 0; i <size; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for ( i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }

    }
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
        
    return 0;
}