#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<int> X(N),Y(N);

    for(int i=0;i<N;i++)cin>>X[i]>>Y[i];
    int x_diff=*max_element(X.begin(),X.end())-*min_element(X.begin(),X.end());
    int y_diff=*max_element(Y.begin(),Y.end())-*min_element(Y.begin(),Y.end());
    int ans=(max(x_diff,y_diff)+1)/2;

    cout<<ans<<endl;
    return 0;
}

