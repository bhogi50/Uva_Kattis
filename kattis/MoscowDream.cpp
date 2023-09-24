#include <bits/stdc++.h>

int main()
{
    int a,b,c,n;
    
    scanf("%d %d %d %d", &a, &b, &c, &n);
    
    if(a && b && c && (a+b+c >= n) && n>=3)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}
