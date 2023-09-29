#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d", &t);
    
    while(t--)
    {
        char buf[10];
        
        scanf("%s", buf);
        
        if(buf[0] == 'P')
        {
            printf("skipped\n");
            continue;
        }
        
        int index = 0;
        
        while(buf[index] !='+')
        {
            ++index;
        }
        
        printf("%d\n", atoi(buf)+atoi(buf+index+1));
    }
    
    return 0;
}
