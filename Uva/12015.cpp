// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int t;
    
    scanf("%d", &t);
    
    t*=10;
    
    char a[10][110];
    
    int max = 0, k =0;
    
    int count = 0;
    int i = 0;
    
    while(t--)
    {
        
        char s[110];
        int relevance;
        ++count;
        scanf("%s %d", s, &relevance);
        
        if(relevance > max)
        {
            k = 0;
            max = relevance;
            strcpy(a[k], s);
        }
        else if(relevance == max)
        {
            ++k;
            
            strcpy(a[k], s);
        }
        
        if(count == 10)
        {
            ++i;
            
            printf("Case #%d:\n", i);
            
            for(int i=0;i<=k;++i)
            {
                printf("%s\n", a[i]);
            }
            
            max = 0, count = 0, k = 0;
        }
    }
    

    return 0;
}
