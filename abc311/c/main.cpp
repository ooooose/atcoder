#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++) cin >> a[i];

    vector<int> fl(n+1, 0), s;
    int v=1;
    while(fl[v] == 0) {
        fl[v] = 1;
        s.push_back(v);
        v = a[v];
    }

    vector<int> ans;

    for( auto &nx : s) {
        if (nx == v) v = -1;
        if(v == -1) ans.push_back(nx);
    }

    cout << ans.size() << endl;
    for(int i=0; i<ans.size(); i++) {
        if(i) cout << " ";
        cout << ans[i];
    }
    cout << endl;
    return 0;
}

