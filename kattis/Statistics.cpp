#include <bits/stdc++.h>

int main()
{
    int n, t =0;
    while(scanf("%d", &n) != EOF)
    {
        int min = INT_MAX, max = INT_MIN;
        int k;
        for(int i=0;i<n;++i)
        {
            scanf("%d", &k);
            if(k < min)
            {
                min = k;
            }
            if(k>max)
            {
                max = k;
            }
        }
        printf("Case %d: %d %d %d\n", ++t, min, max, max-min);
    }
    return 0;
    
}
