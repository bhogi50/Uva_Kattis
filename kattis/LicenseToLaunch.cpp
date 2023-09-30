#include <bits/stdc++.h>

int main()
{
    int n;
    int min = 0;
    scanf("%d", &n);
    
    int k = 0;
    
    int day = 0;
    
    scanf("%d", &k);
    
    min = k;
    
    for(int i=1;i<n;++i)
    {
        scanf("%d", &k);
        
        if(min > k)
        {
            min = k;
            day = i;
        }
    }
    printf("%d", day);
    return 0;
}
