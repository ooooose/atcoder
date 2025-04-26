#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
int n,k;
int r[8];

void f(vector<int> a) {
    if(a.size() == n) {
        int s = 0;
        rep(i,n) s+= a[i];
        if (s%k == 0) {
            rep(i,n) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    int i = a.size();
    for(int x = 1; x <= r[i]; x++) {
        vector<int> b = a;
        b.push_back(x);
        f(b);
    }
}

int main() {
    cin >> n >> k;
    rep(i,n) cin >> r[i];

    f(vector<int>(0));
    return 0;
}

