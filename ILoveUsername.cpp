#include<bits/stdc++.h>

using namespace std;

const int INF = 1e9;

int main()
{
    int N;
    cin>>N;

    // int scores[N];
    int Least , Most;
    int ans = 0;
    int a;

    cin>>a;
    Least = a;
    Most = a;
    for(int i = 0; i < N - 1 ; i++){
        cin>>a;
        
        if(a < Least){
            Least = a;
            ans++;
        }
        
        if(a > Most){
            Most = a;
            ans++;
        }
    }



    cout<<ans<<"\n";

    

    return 0;
}