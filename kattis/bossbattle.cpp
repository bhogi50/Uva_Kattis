#include <bits/stdc++.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    if(n<=3)
        printf("1");
    else
        printf("%d", n-3+1);
    
    /*
        if only 3 pillars are there, then one bomb is sufficient.
        
        4 pillars means 4-3 = 1 extra bomb is required, because 
        boss can move. i.e., 1 extra bomb + 1 bomb ( for remaining
        3 pillars )
        
        i.e., n pillars means n-3+1 => n pillars - 3 pillars  + 1 bomb for those last 3 pillars
        ( n-3 pillars boss can move freely without issue and 
        it costs us that many n-3 bombs. At last, boss will 
        reside in one of the last 3 pillars and one bomb is 
        sufficient to kill him)
    
    */
    
    return 0;
}
