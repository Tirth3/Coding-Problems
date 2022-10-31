#include<iostream>
#include<string>

using namespace std;

void Run_Case(){
    string b;
    string a;

    cin >> b;

    if (b.length() == 2)
    {
        cout << b << "\n";
    }
    else
    {
        string ans;
        int i;
        for (i = 0; i < (int)b.length() - 2; i += 2)
        {
            char c = b[i];
            ans += c;
        }
        ans += b[i];
        ans += b[i + 1];
        // ans += b[(int)b.length()];
        cout << ans << "\n";
    }
}

int main(){

    int N;
    cin>>N;

    for(int i = 0 ; i < N ; i++)
        Run_Case();
    

    return 0;
}