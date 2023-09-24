#include "bits/stdc++.h"

int main()
{
    int t,n;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        
        int expr = (((((((n * 567) / 9) + 7492 ) * 235 ) / 47 ) - 498 ) / 10) % 10;
        
        printf("%d\n", (expr < 0) ?  -expr : expr);
    }
    
    return 0;
}
