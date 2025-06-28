#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(){
    using namespace std;
    unsigned N;
    unsigned long long S;
    cin>>N>>S;

    vector<unsigned long long> A(N);
    for(auto& a: A)cin>>a;

    const auto X=accumulate(begin(A),end(A),0ULL);
    if(X==0)
    {
        cout<<(S==0?"Yes":"No")<<endl;
        return 0;
    }

    S%=X;
    A.reserve(2*N);
    for(unsigned i=0;i<N;++i)A.emplace_back(A[i]);

    set<unsigned long long> prefix_sum;
    prefix_sum.insert(0);
    unsigned long long current_sum=0;
    for (const auto a: A) 
    {
        current_sum+=a;
        if (prefix_sum.count(current_sum-S))
        {
            cout<<"Yes"<<endl;
            return 0;
        }
        prefix_sum.insert(current_sum);
    }
    cout<<"No"<<endl;
    return 0;
}
