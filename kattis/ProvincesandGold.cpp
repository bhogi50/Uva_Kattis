#include <bits/stdc++.h>

int main()
{
    int gold_buy = 6, silver_buy = 3, copper_buy = 0;
    int province_buy = 8, duchy_buy=5, estate_buy=2;
    
    int gold = 0, silver = 0, copper =0;
    
    scanf("%d %d %d", &gold, &silver, &copper);
    
    int total_buy_power = gold * 3 + silver * 2 + copper * 1;
    char s[10]="";
    if(total_buy_power >=province_buy )
        strcpy(s,"Province") ;
    else if(total_buy_power >=duchy_buy )
        strcpy(s, "Duchy");
    else if(total_buy_power >=estate_buy )
        strcpy(s, "Estate");
        
    char s1[10];
    
    if(total_buy_power >=gold_buy )
        strcpy(s1, "Gold");
    else if(total_buy_power >=silver_buy )
        strcpy(s1 ,"Silver");
    else if(total_buy_power >=copper_buy )
        strcpy(s1 ,"Copper");
        
        
    if(strcmp(s,"")==0)
        printf("%s", s1);
    else
        printf("%s or %s", s, s1);
    
    return 0;
}
