#include <bits/stdc++.h>

int main()
{
    int p, a,b,c,d,n;
    
    scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n);
    
    float max_diff = 0;
    
    float max_price = p*(sin(a + b) + cos(c + d)+2);
    
    for(int i=2;i<=n;++i)
    {
        float cur_stock_price = p*(sin(a*i + b) + cos(c*i + d)+2);
        
        if(cur_stock_price > max_price)
        {
            max_price = cur_stock_price;
        }
        else if(max_price - cur_stock_price > max_diff)
        {
            max_diff = max_price - cur_stock_price;
        }
    }
    
    printf("%.6f\n", max_diff);
    return 0;
}
