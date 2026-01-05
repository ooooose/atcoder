#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;

    vector<int> st;
    st.reserve(N);

    for(int i=0;i<N;i++)
    {
        int a;cin>>a;
        st.push_back(a);
        int size=st.size();

        if(size>=4 && st[size-4]==st[size-3] && st[size-3]==st[size-2] && st[size-2]==st[size-1])
        {
            for(int i=0;i<4;i++)st.pop_back();
        }
    }

    cout<<st.size()<<endl;
    return 0;
}

