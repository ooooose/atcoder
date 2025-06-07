#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll=long long;

int main() {
    int N;
    cin>>N;
    int limit=sqrt(N);
    priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> min_heap;
    set<pair<int,int>> V;
    set<pair<int,int>> C;

    min_heap.push({2*2,2,2});
    V.insert(make_pair(2,2));

    while(!min_heap.empty()){
        auto[p,a,b]=min_heap.top();
        min_heap.pop();
        if(p>limit)break;
        if(__gcd(a,b)==1) C.insert(make_pair(a,b));
        if(a+1<=b&&V.insert(make_pair(a+1,b)).second){
            min_heap.push({(a+1)*b,a+1,b});
        }
        if(V.insert(make_pair(a,b+1)).second){
            min_heap.push({a*(b+1),a,b+1});
        }
    }
    
    cout<<C.size()<<endl;
    
    return 0;
}

