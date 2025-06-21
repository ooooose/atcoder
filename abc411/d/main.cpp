#include <bits/stdc++.h>
using namespace std;

struct Node {
    int parent;
    string s;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,Q; cin>>N>>Q;
    vector<int> cur(N+1,0);
    
    vector<Node> nodes;
    nodes.push_back({-1,""});
    for(int i=0;i<Q;i++)
    {
        int type;cin>>type;
        if (type==1)
        {
            int p;cin>>p;
            cur[p]=cur[0];
        }
        else if(type==2)
        {
            int p;
            string s;
            cin>>p>>s;
            Node node;
            node.parent=cur[p];
            node.s=s;
            int idx=nodes.size();
            nodes.push_back(node);
            cur[p]=idx;
        }
        else if(type==3)
        {
            int p;cin>>p;
            cur[0]=cur[p];
        }
    }
    
    string ans;
    vector<string> segs;
    int c=cur[0];
    while(c!=-1)
    {
        segs.push_back(nodes[c].s);
        c=nodes[c].parent;
    }
    reverse(segs.begin(),segs.end());
    for(auto &s:segs)ans+=s;
    cout<<ans<<"\n";
    return 0;
}
