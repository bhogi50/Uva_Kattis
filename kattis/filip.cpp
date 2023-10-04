#include <bits/stdc++.h>

int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    
    int m_x=0,m_y=0;
    
    while(x>0)
    {
        m_x = m_x * 10 + (x%10);
        x/=10;
    }
    
    while(y>0)
    {
        m_y = m_y * 10 + (y%10);
        y/=10;
    }
    
    printf("%d\n", (m_x > m_y) ? m_x : m_y);
    
    return 0;
}
