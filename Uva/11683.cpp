#include <bits/stdc++.h>

int main()
{
    int height, width;
    
    while(scanf("%d %d", &height, &width), height)
    {
        int count = 0;
        int *p = new int[width];
        
        scanf("%d", &p[0]);
        
        count += (height - p[0]);
        
        for(int i=1;i<width; ++i)
        {
            scanf("%d", &p[i]);
            
            if(p[i] != height)
            {
                int tmp = p[i-1] - p[i];
                
                if(tmp>0)
                    count+= tmp;
            }
        }
        printf("%d\n", count);
        
        if(p)
            delete p;
    }
    
    return 0;
}
