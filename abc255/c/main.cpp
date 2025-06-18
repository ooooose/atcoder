#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long X,A,D,N;
    cin>>X>>A>>D>>N;
    long long idx=(X-A)/D;
    long long min_x=A+idx*D; 
    long long mmin_x=A+(idx+1)*D;
    long long ans=1e9;
    if((X<A&&X<A+(N-1)*D)||(X>A&&X>A+(N-1)*D)){
        ans=min(ans,abs(A-X));
    }
    else if(idx+1>N){
        long long max_x=A+(N-1)*D;
        ans=min(ans,abs(max_x-X));
    }
    else{
        ans=min(ans,abs(min_x-X));
        ans=min(ans,abs(mmin_x-X));
    }
    cout<<ans<<endl;
    
    return 0;
}

