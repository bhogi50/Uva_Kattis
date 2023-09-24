#include "bits/stdc++.h"

// assume that 1 beam controlls 3 * 3 cells. So, n * m cells require atleast n/3 *  m/3 beams.

int main()
{
    int t,n,m;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &n, &m);
        printf("%d\n", (n/3) * (m/3));
    }
    
    return 0;
}
