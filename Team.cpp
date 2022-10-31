#include<iostream>


int main(){
				
				int N;
				int a,b,c,ans = 0;

				std::cin>>N;
				
				for(int i = 0 ; i < N; i++){
								std::cin>>a>>b>>c;
								int res = a + b + c;
								if(res >= 2){
												ans++;
								}
				}

				std::cout<<ans<<"\n";

				return 0;
}
