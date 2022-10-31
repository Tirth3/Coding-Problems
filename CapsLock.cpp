#include<bits/stdc++.h>

using namespace std;

int main(){
	 
  string String;

  cin>>String;
  bool c = true;

  for(int i = 1 ; i < (int)String.length() ; i++){
	 if(islower(String[i])){ c = false; }
  }

  if(c == true){
	 char u;
	 for(int i = 0 ; i < (int)String.length() ; i++){
		if(islower(String[i])){
		  u = toupper(String[i]);
		}else {
	 		u = tolower(String[i]);
		}
		cout<<u;
	 }
  }else {
	 cout<<String;
  }

  return 0;

}
