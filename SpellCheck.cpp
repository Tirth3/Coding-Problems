#include<bits/stdc++.h>

using namespace std;

int main(){

    int T;
    cin>>T;
    string Timur = "Timur";
    sort(Timur.begin(), Timur.end());

    for(int i = 0 ; i < T ; i++){
        int len;
        string s;
        cin>>len;
        cin>>s;
        if(len == 5){
            sort(s.begin() , s.end());
            if(s == Timur){
                cout<<"YES"<<"\n";
            }else{ cout<<"NO"<<"\n"; }
        }
        else{
            cout<<"NO"<<"\n";
        }

    }

    return 0;
}