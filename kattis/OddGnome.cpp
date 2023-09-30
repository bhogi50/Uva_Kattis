#include <bits/stdc++.h>

int main()
{
    int t;
    
    scanf("%d", &t);
    
    while(t--)
    {
        int n;
        scanf("%d", &n);
        
        int val = 0;
        
        scanf("%d", &val);
        
        int k;
        
        int f = 0;
        
        for(int i=1;i<n;++i)
        {
            scanf("%d", &k);
            
            if(val+1!=k && f == 0)
            {
                printf("%d\n", i+1);
                f = 1;
            }
            
            val = k;
        }
    }
    return 0;
}
