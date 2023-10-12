#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a=0;
    char c;
    char s[10];
    
    int arr[26] = {0};
    
    int right = 0, time = 0;
    
    int cur_time  = 0;
    
    
    while(scanf("%d", &a) , a!=-1)
    {
        cur_time = a;
        scanf("%s %s", &c, &s);
  
        int index = c - 'A';

        if(arr[index] == 1)
            continue;
        
        if(strcmp(s, "right") == 0)
        {
               time += cur_time;
           
               if(arr[index]<0)
               {
                   time +=(abs(arr[index]) * 20);
               }
               
               arr[index] = 1;
               ++right;
        }
        else
        {
            arr[index] -=1;
        }
    }
    
    printf("%d %d\n", right, time);
    
    return 0;
}
