#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
    int N,L;
    cin>>N>>L;
    vector<int> d(N-1);

    for (int i = 0; i < N-1; i++) {
        cin >> d[i];
    }
    
    if (L%3!=0) {
        cout<<0<<endl;
        return 0;
    }
    
    ll third=L/3;
    
    vector<ll> pos(N);
    pos[0] = 0;
    for (int i = 1; i < N; i++) {
        pos[i] = (pos[i-1] + d[i-1]) % L;
    }
    
    unordered_map<ll,int> pos_count;
    for (int i=0;i<N;i++) pos_count[pos[i]]++;
    
    ll count = 0;
    for (auto& p : pos_count) {
        ll pos_a=p.first;
        int cnt_a=p.second;
        
        ll pos_b=(pos_a+third)%L;
        ll pos_c=(pos_a+2*third)%L;
        
        if (pos_a!=pos_b&&pos_b!=pos_c&&pos_c!=pos_a) {
            if (pos_count.find(pos_b)!=pos_count.end() && 
                pos_count.find(pos_c)!=pos_count.end()) {
                
                int cnt_b=pos_count[pos_b];
                int cnt_c=pos_count[pos_c];
                
                count+=(ll)cnt_a*cnt_b*cnt_c;
            }
        }
    }
    
    count/=3;
    cout<<count<<endl;
    return 0;
}
