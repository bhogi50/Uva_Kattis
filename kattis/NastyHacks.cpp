#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d", &t);
    
    int a,b,c;
    while(t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        
        if(b-c > a)
        {
            printf("advertise\n");
        }
        else if(b-c == a)
        {
            printf("does not matter\n");
        }
        else
        {
            printf("do not advertise\n");
        }
    }
    
    return 0;
}
