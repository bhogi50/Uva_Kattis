#include "bits/stdc++.h"

int main()
{
    int x;
    scanf("%d", &x);
    
    int n;
    scanf("%d", &n);
    
    int a,sum=0;
    
    while(n--)
    {
        scanf("%d", &a);
        sum += (x-a);
    }
    printf("%d", sum+x);
    
    return 0;
}
