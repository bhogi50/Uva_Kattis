#include <bits/stdc++.h>

int main()
{
    int t;
    int a,b,c;
    
    scanf("%d", &t);
    
    int i = 0;
    
    while(t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        
        int max = std::max(a, std::max(b,c));
        int min = std::min(a, std::min(b,c));
        
        printf("Case %d: %d\n", ++i, a+b+c-max-min);
        
    }

    return 0;
}
