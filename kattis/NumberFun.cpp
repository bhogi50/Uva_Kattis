#include <bits/stdc++.h>

int main()
{
    int t;
    
    int a,b,c;
    
    scanf("%d", &t);
    
    while(t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        
        if((a+b == c) || (a/b == c && a%b == 0) || (b/a == c && b%a == 0) || (a*b == c) || (abs(a-b) ==c))
        {
            printf("Possible\n");
            continue;
        }
        printf("Impossible\n");
    }
    return 0;
}
