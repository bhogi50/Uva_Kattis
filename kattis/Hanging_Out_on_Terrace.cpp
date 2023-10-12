#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    
    scanf("%d %d", &n, &t);
    
    char s[10];
    int d;
    
    int tot=0,rej = 0;
    while(t--)
    {
        scanf("%s %d", &s, &d);
        
        if(strcmp(s,"enter") == 0)
        {
            if(tot + d <=n)
            {
                tot += d;
            }
            else
            {
                rej +=1;
            }
        }
        else
        {
            tot -= d;
        }
    }
    printf("%d", rej);
    
    return 0;
}
