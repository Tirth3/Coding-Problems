#include <bits/stdc++.h>


int main(){

  int N , count = 0;
  int LuckyNum[] = {4, 7 , 47 , 74 , 444 , 447 , 477 , 744 , 774 , 777};

  std::cin>>N;
  
  for(int i = 0 ; i < 8 ; i++){
	 if(N % LuckyNum[i] == 0){ count++; }
  }

  if(count > 0){ std::cout<<"YES"<<"\n"; }
  else { std::cout<<"NO"<<"\n"; }

  return 0;
}
