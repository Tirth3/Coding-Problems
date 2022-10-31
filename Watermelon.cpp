#include<iostream>


int main(){
	
	int N;
	std::cin>>N;
	if(N <= 2){
		std::cout<<"No"<<"\n";
	}
	else if(N%2 == 0){
		std::cout<<"Yes"<<"\n";
	}else{
		std::cout<<"No"<<"\n";
	}
			

	return 0;

}
