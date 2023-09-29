#include <bits/stdc++.h>

int main()
{
    int t,i=1;
    
    scanf("%d", &t);
    
    int l,w,h=0;
    
    while(t--)
    {
        scanf("%d %d %d", &l, &w, &h);
        
        if(l>20 || w>20 || h>20) printf("Case %d: bad\n", i);
        else printf("Case %d: good\n", i);
        ++i;
    }

    return 0;
}
