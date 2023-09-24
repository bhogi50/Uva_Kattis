#include "bits/stdc++.h"
//don't use abs(), as it has some limit i think...
int main()
{
    long long a,b;
    
    while(scanf("%lld %lld", &a, &b) != EOF )
    {
        printf("%lld\n", (a>b)? a-b : b-a);
    }
    return 0;
}
