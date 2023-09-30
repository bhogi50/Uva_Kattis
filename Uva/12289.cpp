#include <bits/stdc++.h>

int main()
{
    int t;
    char s[20];
    
    scanf("%d", &t);

    while(t--)
    {
        scanf("%s", s);
        int one = 0, two = 0;
        if(strlen(s) > 3)
        {
            printf("3\n");
        }
        else{
            if(s[0] == 'o' )
            {
                ++one;
            }
            if(s[1] == 'n'){
                ++one;   
            }
            if(s[2] == 'e'){
                ++one;
            }
            if(s[0] == 't' )
            {
                ++two;
            }
            if(s[1] == 'w'){
                ++two;   
            }
            if(s[2] == 'o'){
                ++two;
            }
            
            if(one>two)
            {
                printf("1\n");
            }
            else
            {
                printf("2\n");
            }
            
        }
        
        
        
    }

    return 0;
}
