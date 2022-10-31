#include<bits/stdc++.h>

using namespace std;

int main(){

    int N , M ; 
    cin>>N>>M;

    int ans = (N - 1)/(M - 1) + N;
    cout<<ans<<"\n";

    // if(N < M){
    //     cout<<N<<"\n";
    // }
    // else{
    //     int pairs = N;
    //     for(int i = 0 ; i < N ; i++){
    //         if(i % M == 0){
    //             pairs++;
    //             if(pairs % M == 0)
    //                 pairs++;
    //         }
    //     }
    //     cout<<pairs<<"\n";
    //     // int i = 0 , pairs = N;
    //     // while(i <= N){
    //     //     i++;
    //     //     if(i % M == 0){
    //     //         // count++;
    //     //         pairs++;
    //     //         if(pairs % M == 0){
    //     //             pairs++;
    //     //         }
    //     //     }
    //     // }
    //     // cout<<pairs<<"\n";
    // }

    return 0;
}