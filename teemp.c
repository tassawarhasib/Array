#include <stdio.h>
int main()
{
    int n,i,p1=0,p2=0,maxp1,maxp2;
    scanf("%d",&n);

    int arr[n*2];
    int lead[n*2];
    for ( i = 0; i < n*2; i++)
    {
        scanf("%d",&arr[i]);
    }

    //lead sb collect krne wala array
    for(i=0; i<n*2; i+=2)
    {
        if (arr[i]>arr[i+1])
        {
            lead[i] = arr[i] - arr[i+1];
        }
        else
        {
            lead[i] = arr[i+1] - arr[i];
        }        
    }

    // player 1 ka sum
    for(i=0; i<n*2; i+=2)
    {
        p1 = p1 + arr[i];
    }
    
    // player 2 ka sum
    for(i=1; i<n*2; i+=2)
    {
        p2 = p2 + arr[i];
    }

    maxp1 = arr[0];
    maxp2 = arr[1];

    
    for ( i = 0; i < n*2; i+=2)
    {
        if (arr[i] > maxp1)
        {
            maxp1 = arr[i];
        }
    }

    for ( i = 1; i < n*2; i+=2)
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
    return 0;
    
}
