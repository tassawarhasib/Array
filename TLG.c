// The Lead Game Problem Code: TLG

#include <stdio.h>
int main()
{
    int round,i,p1=0,p2=0;
    scanf("%d",&round);

    int arr[n*2];
    int lead[n*2];
    for ( i = 0; i < n*2; i++)
    {
        scanf("%d",&arr[i]);
    }

    for ( i = 0; i < n; i+2)
    {
        if (arr[i]>arr[i+1])
        {
            lead[i] = arr[i] - arr[i+1];
        }
        else
        {
            lead[i] = arr[i+1] - arr[i]
        }        
    }

    for(i=0; i<n*2; i+2)
    {
        p1 = p1 + arr[i];
    }

    for(i=1; i<n*2; i+2)
    {
        p2 = p2 + arr[i];
    }

    maxp1 = p1[0];
    maxp2 = p2[0];

    for ( i = 0; i < n*2; i+2)
    {
        if (arr[i] > maxp1)
        {
            maxp1 = arr[i];
        }
    }

    for ( i = 1; i < n*2; i+2)
    {
        if (arr[i] > maxp2)
        {
            maxp2 = arr[i];
        }
    }


    if (p1>p2)
    {
        printf("1 ");
        printf("%d", maxp1);
        
        
    }
    if (p1<p2)
    {
        printf("2 ");
        printf("%d", maxp2);

    }


    
    





    // for ( i = 0; i < n*2; i++)
    // {
    //     printf("%d", arr[i]);
    // }
    
    
    return 0;
    
}