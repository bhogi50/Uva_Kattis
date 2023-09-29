#include <bits/stdc++.h>

int main()
{
    int t;
    
    scanf("%d", &t);
    
    long long int x,y=0;
    
    while(t--)
    {
        scanf("%lld %lld", &x, &y);
        
        if(x<y) printf("<\n");
        else if(x>y) printf(">\n");
        else printf("=\n");
    }
    
    
    return 0;
}
