#include <bits/stdc++.h>

int main()
{
    int a,b;
    
    int i = 1;
    while(scanf("%d %d", &a, &b), (a || b))
    {
        int req = (a-b)/b + ((a-b)%b > 0 && a>=b);
        
        if(req > 26)
        {
            printf("Case %d : impossible\n", i);
        }
        else{
            printf("Case %d: %d\n", i, req);
        } 

        ++i;
    }

    return 0;
}
