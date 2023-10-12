#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[35];
    
    scanf("%s", &s);
    int flag = 0;
    
    for(int i=0;i<strlen(s)-1;++i)
    {
        if(s[i] == 's' && s[i+1] == 's')
        {
            flag = 1;
            break;
        }
    }
    if(flag)
        printf("hiss");
    else
        printf("no hiss");
    
    return 0;
}
