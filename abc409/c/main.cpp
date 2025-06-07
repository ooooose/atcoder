#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
    int N,L;
    cin>>N>>L;
    map<int,vector<int>> D;
    D[0].push_back(1);

    int current=0;
    for (int i=1;i<N;i++) {
        int diff;cin>>diff;
        current=(current+diff)%L;
        D[current].push_back(i+1);
    }
    
    if (L%3!=0) {
        cout<<0<<endl;
        return 0;
    }
    int ans=0;
    for(int i=0;i<L/3;i++){
        int a=D[i].size();
        int b=D[i+L/3].size();
        int c=D[i+L/3*2].size();
        ans+=a*b*c;
    }
    cout<<ans<<endl;
    return 0;
}
