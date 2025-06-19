#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    vector<pair<int,int>> C(N);
    vector<int> O(N);
    for(int i=0;i<N;i++)
    {
        cin>>C[i].first>>C[i].second;
        O[i]=i;
    }
    double total=0;
    long long count=0;
    do{
        double dist=0;
        for(int i=0;i<N-1;i++)
        {
            int x1=C[O[i]].first,y1=C[O[i]].second;
            int x2=C[O[i+1]].first,y2=C[O[i+1]].second;
            double dx=x1-x2,dy=y1-y2;
            dist+=sqrt(dx*dx+dy*dy);
        }
        total+=dist;
        count++;
    }while(next_permutation(O.begin(),O.end()));
    double ans=total/count;
    cout<<fixed<<setprecision(10)<<ans<<endl;
    return 0;
}

