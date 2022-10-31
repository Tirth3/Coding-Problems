#include <bits/stdc++.h>
/* #include <string> */

/* int RunCase(){ */
/*   int ans = 0; */
/*   std::string strings[2]; */

/*   std::cin>>strings[0]; */
/*   std::cin>>strings[1]; */

/*   std::transform(strings[0].begin() , strings[0].end() , strings[0].begin() , ::toupper); */
/*   std::transform(strings[1].begin() , strings[1].end() , strings[1].begin() , ::toupper); */

/*   for(int i = 0 ; i < (int)strings[0].length() ; i++){ */
/* 		int a = (int)strings[0][i] - '0'; */
/* 		for(int j = 0 ; j < (int)strings[1].length() ; j++){ */
/* 		  int b = (int)strings[1][j] - '0'; */
/* 		  if(a < b){ */
/* 			 ans = -1; */
/* 			 //return  -1; */
/* 		  } */
/* 		  if (a > b) { */
/* 			 ans = 1; */
/* 			 //return 1; */
/* 		  } */
/* 		} */
/*   } */

/*   return  ans; */

/* } */

int main(){
  
  /* int ans = RunCase(); */
  std::string a , b;
  
  std::cin>>a;
  std::cin>>b;
  
  
  std::transform(a.begin() , a.end() , a.begin() , ::tolower);
  std::transform(b.begin() , b.end() , b.begin() , ::tolower);
  
  if(a < b){
	 std::cout<<"-1"<<"\n";
  } else if(a > b){
	 std::cout<<"1"<<"\n";
  }else if(a == b){
	 std::cout<<"0"<<"\n";
  }

  /* std::cout<<ans<<"\n"; */

  return 0;
}
