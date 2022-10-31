#include<bits/stdc++.h>

using namespace std;

int main(){

    int N , K;

    cin>>N>>K;

    int acc = 0, ans = 0;
    for(int i = 1; i <= N ; i++){
        acc += 5 * i;
        if((acc + K) > 240){
            break;
        }
        ans++;
    }

    cout<<ans<<"\n";

    return 0;
}