#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int solve(const vector<int>& s)
{
    int n=s.size();
    if(n==2)return(s[1]<=2LL*s[0])?2:-1;
    
    vector<int> middle(s.begin()+1,s.end()-1);
    sort(middle.begin(),middle.end());
    
    int l=1;
    int cur=2LL*s[0];
    int p=0;
    
    while(cur<s[n-1])
    {
        int nxt=cur;
        while(p<(int)middle.size()&&middle[p]<=cur)
        {
            nxt=max(nxt,2*middle[p]);
            p++;
        }
        if(nxt==cur)return -1;
        l++;
        cur=nxt;
    }
    return l+1;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;cin>>T;
    while(T--)
    {
        int N;cin>>N;
        vector<int> S(N);
        for(int i=0;i<N;i++)cin>>S[i];
        int ans=solve(S);
        cout<<ans<<"\n";
    }
    return 0;
}
