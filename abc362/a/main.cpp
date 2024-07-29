#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int R, G, B;
    cin >> R >> G >> B;
    string C;
    cin >> C;
    int ans;
    if (C == "Red") {
        ans = min(G, B);
    } else if (C  == "Green") {
        ans = min(R, B);
    } else if (C  == "Blue") {
        ans = min(R, G);
    }
    cout << ans << endl;
    return 0;
}

