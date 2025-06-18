#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long X,A,D,N;
    cin>>X>>A>>D>>N;
    // 交差が負数の場合は正数に直すためにAを末尾の項の値に直してDを反転させる。
    if(D<0){
        long long fi=A+D*(N-1);
        A=fi;
        D*=-1;
    }

    long long st=0,fi=(N-1);
    // Xに最も近い値になる項を二分探索している
    while(st<fi){
        long long te=(st+fi)/2;
        if((A+D*te)<X)st=te+1;
        else fi=te-1;
    }
    long long res=8e18;
    // 上記二分探索した結果の項st±5を探索している。その際に0以上、N未満になるように調整している
    for(long long i=max(0ll,st-5);i<=min((N-1),st+5);i++)res=min(res,abs(A+D*i-X));
    cout<<res<<endl;

    return 0;
}

