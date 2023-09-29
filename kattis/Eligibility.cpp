#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d", &t);
    
    while(t--)
    {
        char s[35], s1[20], s2[20]; int c;
        
        char flag = 0;
        
        scanf("%s %s %s %d", s, s1, s2, &c);
        
        int y1 = ( int(s1[0]-'0') * 1000 ) + ( int(s1[1]-'0')*100 ) + ( int(s1[2]-'0') * 10 ) + ( int(s1[3])-'0' );
        
        int y2 = ( int(s2[0]-'0') * 1000 ) + ( int(s2[1]-'0')*100 ) + ( int(s2[2]-'0') * 10 ) + ( int(s2[3])-'0' );

        if(y1>=2010 || y2>=1991)
        {
            flag = 1;
        }
        else if(y1<2010 && y2<1991 && c<41)
        {
            flag = 2;
        }

        const char *ans = (flag == 1) ? "eligible" : ((flag == 2) ? "coach petitions" : "ineligible");

        printf("%s %s\n", s, ans);
    }
    return 0;
}
