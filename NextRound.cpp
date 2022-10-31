#include<iostream>


int main(){
				
				int N , K , ans = 0;
				std::cin>>N>>K;
				int scores[N];

				for(int i = 0 ; i < N ; i++){
								std::cin>>scores[i];
				}
				
				if(scores[K-1] < 0){
								ans = 0 ;
				}

				else{
								for(int i = 0 ; i < N ; i++){
												if(scores[i] > 0 && scores[i] >= scores[K-1]){
																ans++; 
												}
								}
				}

				std::cout<<ans<<"\n";

				return 0;
}
