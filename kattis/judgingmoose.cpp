#include <bits/stdc++.h>

int main()
{
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    if(a == 0 && b == 0)
    {
        printf("Not a moose");
    }
    else
    {
        if(a==b)
        {
            printf("Even %d", 2*a);
        }
        else
        {
            printf("Odd %d", 2 * std::max(a,b));
        }
    }
    return 0;
}
