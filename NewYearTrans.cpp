#include<bits/stdc++.h>

using namespace std;

int N , T;

int main(){

    cin>>N>>T;

    int a[N - 1];
    int p = 0;
    for (int i = 0; i < N - 1; i++)
        cin >> a[i];

    while (p < T - 1)
        p += a[p];
    

    if (p == T - 1)
        cout << "YES"<< "\n";
    else
        cout << "NO"<< "\n";

    return 0;
}