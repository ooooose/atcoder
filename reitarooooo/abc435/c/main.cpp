#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;cin >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++)cin>>A[i];

    long long reach=A[0];
    int i=1;

    while(i<N&&i<reach)
    {
        reach=max(reach,(long long)i+A[i]);
        i++;
    }

    cout<<min((long long)N,reach)<<"\n";
    return 0;
}
