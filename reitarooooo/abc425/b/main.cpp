#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<int> A(N);
    set<int> diff;
    int cnt=0;
    for(int i=0;i<N;i++) {
        cin>>A[i];
        if(A[i]!=-1){
            diff.insert(A[i]);
            cnt++;
        }
    }
    if(diff.size()!=cnt)
    {
        cout<<"No"<<endl;
        return 0;
    }
    for(int i=0;i<N;i++)
    {
        if(A[i]==-1)
        {
            for(int j=1;j<=N;j++)
            {
                if(diff.count(j))continue;
                A[i]=j;
                diff.insert(j);
                break;
            }
        }
    }

    cout<<"Yes"<<endl;
    for(int i=0;i<N;i++)
    {
        cout<<A[i]<<(i+1!=N?" ":"");
    }
    cout<<endl;

    
    return 0;
}

