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
        int high = 0, low = 0;
        int k;
        
        int prev = 0;
        scanf("%d", &k);
        
        prev = k;
        
        for(int i=1;i<n;++i)
        {
            scanf("%d", &k);
            
            if(prev < k)
                high+=1;
            else if(prev>k)
                low+=1;
            
            prev = k;
        }
        printf("Case %d: %d %d\n", ++test, high, low);
    }
    
    
    return 0;
    
}
