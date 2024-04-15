#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> v(n);

    ll p = 0;
    for (int i = 0; i < n; i++) {
        ll num;
        cin >> num;
        p += num;
        v.push_back(p);
    }
    ll min = *min_element(v.begin(), v.end());
    ll first = -1 * min;
    cout << p + first << endl;
}

