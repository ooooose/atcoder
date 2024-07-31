#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N;
    cin >> N;
    int count = 0;
    rep(i, N) {
        string s;
        cin >> s;
        if (s == "Takahashi") count++;
    }
    cout << count << endl;
    
    return 0;
}

