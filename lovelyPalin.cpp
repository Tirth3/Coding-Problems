#include<bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  string N;// , ans = 0;
  cin>>N;

  for(int i = (int)N.size() - 1 ; i >= 0; i--)
	 N += N[i];
  cout<<N<<"\n";


  return 0;
}
