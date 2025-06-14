#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin>>N;
    vector<int> H(N);
    for (int i=0;i<N;i++)cin>>H[i];
    
    vector<int> ans(N,0);
    vector<int> st;
    ans[N-1]=0;
    
    for (int i=N-2;i>=0;i--){
        int idx=i+1;
        while(!st.empty() && H[st.back()] < H[idx])st.pop_back();
        st.push_back(idx);
        ans[i]=st.size();
    }
    for (int i=0;i<N;i++)cout<<ans[i]<<(i+1==N?"\n":" ");
    return 0;
}
