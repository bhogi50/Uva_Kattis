#include <bits/stdc++.h>

int main()
{
    char s[20];
    int i = 1;
    while(scanf("%s",s) , (strcmp(s,"#")))
    {
        printf("Case %d: ",i);
        if(strcmp(s, "HELLO") == 0) printf("ENGLISH\n");
        else if(strcmp(s, "HOLA") == 0) printf("SPANISH\n");
        else if(strcmp(s, "HALLO") == 0) printf("GERMAN\n");
        else if(strcmp(s, "BONJOUR") == 0) printf("FRENCH\n");
        else if(strcmp(s, "CIAO") == 0) printf("ITALIAN\n");
        else if(strcmp(s, "ZDRAVSTVUJTE") == 0) printf("RUSSIAN\n");
        else printf("UNKNOWN\n");
        ++i;
    }  
    return 0;
}
