#include <bits/stdc++.h>

int Calculate(char *name)
{
    int total(0), temp;
    while (*name)
    {   
        if (*name >= 'a' && *name <= 'z')
            total += *name - 'a' + 1;        
        else if (*name >= 'A' && *name <= 'Z')
            total += *name - 'A' + 1;
        ++name;
    }
    
    while (total >= 10)
    {
        temp = 0;
        
        while (total)
        {
            temp += total % 10;
            total /= 10;
        }
        total = temp;
    }
    
    return total;
}
int main()
{
    char nameOne[30], nameTwo[30];
    int first, second;
    
    while (gets(nameOne))
    {
        gets(nameTwo);
        first = Calculate(nameOne);
        second = Calculate(nameTwo);
        
        if (first < second)
            printf("%.2f %%\n", first * 100.0 / second);
         
        else
            printf("%.2f %%\n", second * 100.0 / first);
    }
    
}
