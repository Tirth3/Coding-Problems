#include<bits/stdc++.h>

using namespace std;

int main(){
  
  int S, N;
  bool flag = true; 
  cin>>S>>N;
  pair<int,int> arr[N];

  for(int i = 0 ; i < N ; i++)
	 cin>>arr[i].first>>arr[i].second;

  sort(arr , arr+N);

  for(int i = 0 ; i < N ; i++){
	 if(S <= arr[i].first){ flag = false; break; }
	 else { S+=arr[i].second; flag = true; }
  }

  if(flag) { cout<<"YES"<<"\n"; }
  else { cout<<"NO"<<"\n"; } 



  return 0;
}
