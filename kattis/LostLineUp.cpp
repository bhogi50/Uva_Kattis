#include <bits/stdc++.h>

int main()
{
    int n;
    
    scanf("%d", &n);
    
    int *p = new int[n];
    
    int k = n-1;
    
    int i = 0;
    
    while(k--)
    {
        scanf("%d", &p[i]);
        ++i;
    }
    
    printf("1");
    
    i = 0;
    
    while(i<n-1)
    {
        for(int j=0;j<n-1;++j)
        {
            if(p[j] == i)
            {
                printf(" %d", j+2);
                break;
            }
        }
        ++i;
    }
    
    return 0;
}
