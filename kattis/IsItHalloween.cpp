#include <bits/stdc++.h>

int main()
{
    char s[10];

    scanf("%[^\n]s", s);

    if(strcmp(s, "OCT 31") ==0 || strcmp(s, "DEC 25") == 0)
        printf("yup");
    else
        printf("nope");
    
    return 0;
}
