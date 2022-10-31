#include<bits/stdc++.h>

using namespace std;

int main(){

  int N , count = 0;
  cin>>N;

  vector<pair<int , int>> Coords(N);

  for(int i = 0 ; i < N ; i++){
	 int a,b;
	 cin>>a>>b;
	 Coords[i].first = a; Coords[i].second = b;
  }

  for(auto coord : Coords){
	 pair<int , int> temp;
		 for(int x = -1 ; x < 2 ; x++)
			for(int y = -1 ; y < 2 ; y++){
				temp.first = coord.first + x;
				temp.second = coord.second + y;
				if(find(Coords.begin() , Coords.end() , temp))
				  count++;

			}
  }
	 
  cout<<count<<"\n";

  return 0;
}

