#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++ ) cin >> v.at(i);
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int a,b;
        cin >> a >> b;

        for (int j = 0; j < n; j++) {
            if (v.at(j) == a || v.at(j) == b) {
                cout << v.at(j) << endl;
                break;
            }
        }
    }
}

