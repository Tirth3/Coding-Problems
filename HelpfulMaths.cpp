#include <bits/stdc++.h>

int main(){
  
  std::string str , ans;
  
  std::cin>>str;
  std::vector<int> nums;

  for(int i = 0 ; i < (int)str.length() ; i++){
	 if(str[i] != '+'){
		int a = (int)str[i] - 48;
		nums.push_back(a);
	 }
  }

  std::sort(nums.begin() , nums.end());

  for(auto x : nums){
	 ans += std::to_string(x);
	 ans += '+';
  }

  ans.pop_back();
  std::cout<<ans<<"\n";
  
  return 0;
}
