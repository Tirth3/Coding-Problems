// #include<iostream>
#include<bits/stdc++.h>
// #include<bits/stdc++.h>

using namespace std;

int main(){

    int N;
    cin>>N;
    int x[N];
    for (int i = 0 ; i < N ; i++)
        cin>>x[i];    
    int Q;
    cin>>Q;
    
    sort(x , x + N);
    while(Q--){
        int m , ans;
        cin>>m;
        ans = upper_bound(x , x + N , m) - x;
        cout<<ans<<"\n";
    }
    // int m[Q];
    // for (int i = 0; i < Q; i++)
    //     cin >> m[i];

    // for(int i = 0 ; i < Q ; i++){
    //     int  count = 0;
    //     for(int j = 0 ; j < N ; j++){
    //         int coins = m[i];
    //         int price = x[j];
    //         if(price <= coins)
    //             count++;
    //     }
    //     cout<<count<<"\n";
    // }

    return 0;
}