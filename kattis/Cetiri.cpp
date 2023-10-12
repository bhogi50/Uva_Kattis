#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    int min_num = min(a,min(b,c));
    
    int max_num = max(a,max(b,c));
    
    int midd_num = a+b+c-min_num-max_num;
    
    int d1 = midd_num - min_num;
    
    int d2 = max_num - midd_num;
    
    if(d1 == d2)
    {
        printf("%d", max_num+d1);
    }
    else
    {
        if(d1>d2)
        {
            printf("%d", min_num+d2);
        }
        else
        {
            printf("%d", midd_num + d1);
        }
    }
    
    
    return 0;
}
