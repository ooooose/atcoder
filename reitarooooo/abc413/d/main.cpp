#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;cin>>T;
    while(T--)
    {
        int N;cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++) cin>>A[i];

        sort(A.begin(),A.end(), [](int a,int b) {
            return abs(a) < abs(b);
        });

        set<int> cnt;
        for(int l=0;l<N/2;l++)
        {
            int r=N-l-1;
            cnt.insert(A[l]*A[r]);
        }

        if(cnt.size()==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    
    return 0;
}

