#include <bits/stdc++.h>

int main()
{
    int t = 0,n = 0;
    
    while(scanf("%d", &n), n)
    {
        int x = 0, y = 0,k;
        
        for(int i=0;i<n;++i)
        {
            scanf("%d", &k);
            
            if(k>0)
                x+=1;
            else
                y+=1;
        }
        printf("Case %d: %d\n", ++t, x-y);
    }
    return 0;
}
