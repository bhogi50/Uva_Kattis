#include <bits/stdc++.h>

int main()
{
    int t;
    
    scanf("%d", &t);
    int test = 0;
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int max=0,k;

        scanf("%d", &k);
        
        max = k;
        
        for(int i=1;i<n;++i)
        {
            scanf("%d", &k);
            
            max = (max > k) ? max : k;
        }
        printf("Case %d: %d\n", ++test, max);
    }
    return 0;
}
