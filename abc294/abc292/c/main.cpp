#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    int N;
    cin>>N;
    long long ans=0;

    for(int i=1;i<N;i++){
        // 2つの変数の比較に持ち込む
        int X=i,Y=N-i;
        // XのパターンとYのパターンを数え上げる変数
        long long x=0,y=0;
        for(int j=1;j*j<=X;j++){
            // mod0の時xをインクリメント
            // 2つなので2通りだがXの平方根がjの時は1通りなのでそれ以外をもう一度インクリメント
            if(X%j==0){
                x++;
                if(X!=j*j)x++;
            }
        }
        for(int j=1;j*j<=Y;j++){
            // mod0の時yをインクリメント
            // 2つなので2通りだがYの平方根がjの時は1通りなのでそれ以外をもう一度インクリメント
            if(Y%j==0){
                y++;
                if(Y!=j*j)y++;
            }
        }
        // xペアとyペアの組み合わせをansに足す
        ans+=x*y;
    }

    cout<<ans<<endl;
    return 0;
}

