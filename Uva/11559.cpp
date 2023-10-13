// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n,budget,hotels,weeks;
    
    while(scanf("%d %d %d %d", &n, &budget, &hotels, &weeks) !=EOF)
    {
    
        int hotel_cost = 0, week_day = 0, final_cost = INT_MAX;
        
        while(hotels--)
        {
            scanf("%d", &hotel_cost);
            
            for(int i=0;i<weeks;++i)
            {
                scanf("%d", &week_day);
                
                if(week_day >= n)
                    final_cost = min(final_cost, n*hotel_cost);
            }
        }
        if(final_cost>budget)
            printf("stay home\n");
        else
            printf("%d\n", final_cost);
    }

    return 0;
}
