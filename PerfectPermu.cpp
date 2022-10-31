#include<bits/stdc++.h>

using namespace std;

int main(){

    int N;
    cin>>N;

    if(N == 1){
        cout<<-1<<"\n";
    }
    else{
        int a[N];
        for(int i = 0 ; i < N ; i++){
            a[i] = i;
        }

        for(int i = 0 ; i < N - 1; i++){
            swap(a[i] , a[i+1]);
        }

        for (int i = 0; i < N; i++){
            cout<<a[i]<<" ";
        }
    }

    return 0;
}