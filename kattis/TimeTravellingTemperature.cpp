#include <bits/stdc++.h>

/*
  x is temp. on B where A = 0
  y is no.of degrees in B that equal single degree change in A.
  means 1 degree change in A = 1*y degress in B.
        2 degree change in A = 2*y degrees in B.
        n dgeree change in A = n*y degrees in B.
        
  find temp. where A and B comes equal .
  
  i.e., n*y + x = n
  
  x = n - ny
  
  n = x/(1-y)
  
  if(y == 1) ==> Not Possible.
  
  if(x == 0 && y == 1) ==> many points exists.
*/

int main()
{
    int x,y=0;
    
    scanf("%d %d", &x, &y);
    
    if(x == 0 && y == 1) printf("ALL GOOD");
    else if(y == 1) printf("IMPOSSIBLE");
    else printf("%.6f", x/(1.0 - y));
    
    return 0;
}
