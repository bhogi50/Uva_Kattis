#include <bits/stdc++.h>

int main()
{
    char s[10];
    
    int i =0;
    
    while(scanf("%s", s), (s[0] != '*'))
    {
        if(strcmp(s, "Hajj") == 0)
        {
           printf("Case %d: Hajj-e-Akbar\n", ++i);
           continue;
        }
        printf("Case %d: Hajj-e-Asghar\n", ++i);
    }
    return 0;
}
