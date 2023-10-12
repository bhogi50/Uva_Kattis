#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    
    scanf("%d", &n);
    
    int a, tot, div;
    
    while(n--)
    {
        scanf("%d", &a);
        
        if(a>=0)
        {
            tot+=a;
            div+=1;
        }
    }
    printf("%f", tot/(div*1.0));
    return 0;
}
