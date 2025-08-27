#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;cin>>S;
    int N=S.size();
    double ans=0.0;

    vector<int> t_count(N+1, 0);
    for(int i=0;i<N;i++) t_count[i+1]=t_count[i]+(S[i]=='t'?1:0);

    for(int l=0;l<N;l++)
    {
        if(S[l]!='t') continue;
        for(int r=l+2;r<N;r++) 
        {
            if(S[r]!='t') continue;
            int x=t_count[r+1]-t_count[l];
            int len=r-l+1;
            if(x>=2) 
            {
                double fill=(double)(x-2)/(len-2);
                ans=max(ans,fill);
            }
        }
    }
    cout<<fixed<<setprecision(15)<<ans<<endl;
    return 0;
}

