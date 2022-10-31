#include<iostream>

using namespace std;

int main(){

    int N;
    int cx = 0, cy = 0, cz = 0;
    cin>>N;

    for(int i = 0 ; i < N ; i++){
        int x, y , z;
        cin>>x>>y>>z;
        cx += x;
        cy += y;
        cz += z;
    }

    if(cx == 0 && cy == 0 && cz == 0) { cout<<"YES"<<"\n"; }
    else { cout<<"NO"<<"\n"; }

    return 0;
}