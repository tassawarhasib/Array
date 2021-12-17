#include <stdio.h>

int main()
{
    int arr[100];
    int i,n;

    printf("Enter size of element: ");
    scanf("%d", &n);

    printf("Enter %d element in the array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d" , &arr[i]);
    }

    printf("\nElements in the array are: ");
    for(i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}