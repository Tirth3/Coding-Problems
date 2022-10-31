#include <bits/stdc++.h>

using namespace std;


int main(){
  
  int N;
  cin>>N;
  map<int , int> t;

  for(int i = 0 ; i < N ; i++){
	 int a;
	 cin>>a;
	 t[i] = a;
  }

  for(auto &x : t)
	 cout<<x.first<<" "<<x.second<<"\n";

  return 0;

}
