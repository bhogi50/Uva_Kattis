#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    
    int k = 2; /* 0 -> inc , 1-> dec, 2->neither */
    
    char a[50],b[50];
    
    scanf("%s", a);
    scanf("%s", b);
    
    if(strcmp(a,b) < 0)
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
        
        if(strcmp(b,s) <0 && k==1)
            k = 2;
        else if(strcmp(b,s)>0 && k == 0)
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
