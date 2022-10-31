#include<iostream>
#include<string>

int main(){
  
  int N , X = 0;
  std::cin>>N;
  std::string Bits[N];

  for (int i = 0 ; i < N; i++) {
	 std::cin>>Bits[i];
  }


  for(int i = 0 ; i < N ; i++){
	 std::string str = Bits[i];
	 for(int j = 0 ; j < (int)str.length() ; j++){
		/* std::cout<<str[j]<<"\n"; */
		if(str[j] == '+' && str[j + 1] == '+'){
		  X++;
		  break;
		}
		else if(str[j] == '-' && str[j + 1] == '-'){
		  X--;
		  break;
	 	}
	 }
  }
  
  std::cout<<X<<"\n";
  
  return 0;
}

