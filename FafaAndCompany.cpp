#include<bits/stdc++.h>

using namespace std;

int main(){

    int N;

    cin>>N;

    int l = 1 , ans = 0;

    while (l < (N))
    {
        if((N - l) % l == 0){
            ans++;
        }
        l++;
    }
    
    // for(int l = 0 ; l < (N - 1) ; l++) {
    //     if((N - l)%l == 0){
    //         ans++;
    //     }
    //     cout<<"HEllo"<<"\n";
    // }

    cout<<ans<<"\n";

    return 0;
}