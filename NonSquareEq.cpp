#include<bits/stdc++.h>

using namespace std;

int s(int x){
    int ans = 0;
    
    while (x > 0)
    {
        ans += x % 10;
        x = x / 10;
    }
    
    return ans;
}


int main(){

    int N , ans = -1;  // x2 + s(x).x-n=0
    double x1 , x2;

    cin>>N;

    for(int i = 1 ; i < 90 ; i++){
        x1 = -i + sqrt((i * i + (4 * N))) / 2;
        x2 = -i - sqrt((i * i + (4 * N))) / 2;

        int g = (int)x1;
        int j = (int)x2;

        if(g == x1 && j == x2){
            if(g > j && g > 0 && s(g) == i){
                ans = (int)x1;
                break;
            }
            else if(g < j && j > 0 && s(j) == i){
                ans = (int)x2;
                break;
            }
        }     
    }

    cout<<ans;

    return 0;
}