#include<bits/stdc++.h>
using namespace std;
int main() {
    int H, W;
    cin >> H >> W;

    vector<string> A(H);

    for (int i = 0; i < H; i++) {
        cin >> A.at(i);
    }
    string sharp = "##";
    for (int i = 0; i < W; i++) {
        sharp += '#';
    }


    cout << sharp << endl;

    for (int i = 0; i < H; i++) {
        cout << '#' + A.at(i) + '#' << endl;
    }

    cout << sharp << endl;
}

