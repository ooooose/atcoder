#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,K;
    cin>>N>>K;
    vector<int> ans{K};

    for(int n=0;n<N;n++)
    {
        vector<int> nxt;
        for(int a: ans)
        {
            nxt.push_back(a/2);
            nxt.push_back(a-a/2);
        }
        ans=nxt;
    }

    int max=*max_element(ans.begin(),ans.end());
    int min=*min_element(ans.begin(),ans.end());

    cout<<max-min<<endl;
    for(int i=0;i<(int)ans.size();i++)
    {
        cout<<ans[i]<<(i+1!=(int)ans.size()?" ":"");
    }
    cout<<endl;
    
    return 0;
}

