#include <bits/stdc++.h>
using namespace std;

/* Code Not working. Debug and Fix */


int main()
{
    int n;
    scanf("%d", &n);
    
    int k = 2; /* 0 -> inc , 1-> dec, 2->neither */
    
    char a[50],b[50];
    
    scanf("%s", a);
    scanf("%s", b);
    
    if(a<b)
        k = 0;
    else
        k = 1;
    
    n-=2;
    
    char s[50];
    while(n--)
    {
        scanf("%s",s);
        
        if(k==2)
            continue;
        
        if(b<s && k==1)
            k = 2;
        else if(b>s && k == 0)
            k = 2;
    }
    
    if(k==0)
        printf("INCREASING\n");
    else if(k==1)
        printf("DECREASING\n");
    else
        printf("NEITHER\n");
    
    return 0;
}
