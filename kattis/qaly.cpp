#include "bits/stdc++.h"

int main()
{
    int t;
    scanf("%d", &t);
    
    float a,b,c=0;
    while(t--)
    {
        scanf("%f %f", &a, &b);
        c += (a*b);
    }
    printf("%.3f",c);
    
    return 0;
}
