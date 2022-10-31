#include<iostream>
#include<string>

//using namespace std;

std::string Run_Case(std::string str){
	if(str.length() <= 10){
				return str;
	}

	else{
				std::string ans;
				int count = 0;
				ans += str[0];
				for(int i = 1 ; i < (int)str.length() - 1 ; i++){
								count++;
				}
				ans+=std::to_string(count);
				ans+=str[str.length()-1];
				return ans;
	}

}

int main(){
	
	int N;
	std::cin>>N;
	std::string strings[N] , ans;

	for(int i = 0 ; i < N ; i++){std::cin>>strings[i];}


	for(int i = 0 ; i < N ; i++){
				ans = Run_Case(strings[i]);
				std::cout<<ans<<"\n";
	}
	return 0;
}

