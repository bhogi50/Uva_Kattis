#include <bits/stdc++.h>

int main()
{
    int a,b,c,d;
    
    while(scanf("%d %d %d %d", &a, &b, &c, &d), (a || b ||c ||d))
    {
        int x = std::max((a*10) + b, (b*10) + a);
        
        int y = std::max((c*10) + d, (d*10) + c);
        
        if((x == 21 && y == 21) || (x == y))
        {
            printf("Tie.\n");
        }
        else if((x == 21 && y!=21))
        {
            printf("Player 1 wins.\n");
        }
        else if((x!=21 && y == 21) || (a == b && c == d && x<y) || (a != b && c == d))
        {
            printf("Player 2 wins.\n");
        }
        else if((a == b && c == d && x>y) || (a == b && c != d))
        {
            printf("Player 1 wins.\n");
        }
        else if((a == b && c == d && x<y) || (a != b && c == d))
        {
            printf("Player 2 wins.\n");
        }
        else if(x>y)
        {
            printf("Player 1 wins.\n");
        }
        else
        {
            printf("Player 2 wins.\n");
        }
    }
    return 0;
}
