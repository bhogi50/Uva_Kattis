#include <bits/stdc++.h>

int main()
{
    int a,b;
    
    while(scanf("%d %d", &a, &b))
    {
        if(a==-1 && b==-1) break;
        
        int min = std::min(abs(b-a), ( 99 - abs(b-a) ) + 1);
        
        printf("%d\n", min);
    }
    return 0;
}
