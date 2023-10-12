#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    scanf("%d", &t);
    
    while(t--)
    {
        scanf("%d", &n);
        
        int *p = new int[n];
        
        memset(p,0,n*sizeof(int));
        
        int mov = 0;
        
        char s[20];
        int i = 0;
        
        while(n--)
        {
            scanf("%s", s);
            
            if(strcmp(s,"LEFT") == 0)
            {
                mov-=1;
                p[i] = -1;   
            }
            else if(strcmp(s,"RIGHT") == 0)
            {
                mov+=1;
                p[i] = 1;   
            }
            else
            {
                char a[4]; int pos;
                
                scanf("%s %d", a, &pos);
                
                mov+=p[pos-1];
                
                p[i] = p[pos-1];
            }
            ++i;
        }
        printf("%d\n", mov);
        if(p)
            delete p;
    }
    return 0;
}
