#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    
    float a,b,c,d;
    int count = 0;
    while(t--)
    {
        scanf("%f %f %f %f", &a, &b, &c, &d);
        
        if(d<=7.00)
        {
            if((a<=56 && b<=45 && c<=25) || (a+b+c <=125))
            {
                printf("1\n");
                ++count;
                continue;
            }
        }
        printf("0\n");
    }
    printf("%d\n", count);
    
    
    return 0;
}
