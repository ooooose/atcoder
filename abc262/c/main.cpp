#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    vector<int> a(N+1);
    int same=0;
    for (int i=1;i<=N;i++){
        cin>>a[i];
        if(a[i]==i)same++;
    }
    
    long long ans = 0;
    for (int i=1;i<=N;i++){
        if(a[i]==i)continue;
        if(i<a[i]&&a[a[i]]==i)ans++;
    }
    
    ans+=(long long)same*(same-1)/2;
    cout << ans << "\n";
    return 0;
}

