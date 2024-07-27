#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int H, W;
    cin >> H >> W;
    int Si, Sj;
    cin >> Si >> Sj;

    vector<char> vec(H);
    for (int i = 0; i < H; i++) {
        cin >> vec.at(i);
    }
    cout << vec.at(1) << endl;

    return 0;
}

