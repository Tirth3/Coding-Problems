#include <bits/stdc++.h>

using namespace std;

int main(){

  int a , b , c , ans;
  
  cin>>a>>b>>c;

  ans = a + b + c;
  ans = max(ans , a + b * c);
  ans = max(ans , a * b + c);
  ans = max(ans , (a + b) * c);
  ans = max(ans , (b + c) * a);
  ans = max(ans , a * b * c);

  cout<<ans<<"\n";


  return 0;
}
