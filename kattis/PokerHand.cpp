#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<char,int> m;
    
    char s[3];
    while(scanf("%s", s)!=EOF)
    {
        m[s[0]]++;
    }
    
    int max_val = 0;
    
    for(auto &i : m)
    {
        max_val = max(max_val, i.second);
    }
    
    printf("%d", max_val);
    
    return 0;
}
