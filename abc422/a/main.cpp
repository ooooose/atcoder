#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;cin>>S;
    int i, j;
    char dash;
    stringstream ss(S);
    ss>>i>>dash>>j;

    if(j<8) cout<<i<<'-'<<(j+1)<<endl;
    else cout<<(i+1)<<"-1"<<endl;
    return 0;
}

