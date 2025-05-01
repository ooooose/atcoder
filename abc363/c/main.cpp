#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> a;
    rep(i,n) a.push_back(s[i] - 'a');
    sort(a.begin(), a.end());
    int ans = 0;
    bool ok, flag = false;

    do{
        ok = true;
        for(int i=0; i<=n-k; i++) {
            flag = true;
            for(int j=0;j<k; j++) {
                if (a[i+j] != a[i+k-1-j]) flag = false;
            }
            if(flag) ok = false;
        }
        if(ok) ans++;
    } while(next_permutation(a.begin(), a.end()));
    cout << ans << endl;

    return 0;
}

