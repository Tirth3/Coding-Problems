#include<bits/stdc++.h>

using namespace std;

int main(){

    int T , N , M;
    cin>>T;
    for(int i = 0 ; i < T ; i++){
        cin>>N>>M;
        cout<<min(2 , N-1) * M<<"\n";
;    }

    return 0;
}