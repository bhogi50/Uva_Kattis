#include <bits/stdc++.h>

int main()
{
    int a,b;
    
    scanf("%d %d", &a, &b);
    
    if ( a > b )
    {
        if(a-b>1)
            printf("Dr. Chaz needs %d more pieces of chicken!", a-b);
        else
            printf("Dr. Chaz needs %d more piece of chicken!", a-b);
    }
    else
    {
        if(b-a>1)
            printf("Dr. Chaz will have %d pieces of chicken left over!", b-a);
        else
            printf("Dr. Chaz will have %d piece of chicken left over!", b-a);
    }
    
    return 0;
