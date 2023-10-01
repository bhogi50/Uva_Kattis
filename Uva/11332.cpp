#include <bits/stdc++.h>

int op(long long int n)
{
    while(n>=10)
    {
        int temp = 0;
        
        while(n>0)
        {
            temp += n%10;
            n /=10;
        }
        n = temp;
    }
    return n;
}

int main()
{
    long long int n;
    
    while(scanf("%lld", &n), n)
    {
        printf("%d\n", op(n));
    }
    
    return 0;
}
