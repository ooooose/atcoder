#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int R;cin>>R;

    long long ans=0;

    // 原点と軸上の正方形
    ans+=1+4LL*(R-1);

    // i,j>=1の範囲のみ探索して後で4倍する
    int j=R-1;
    for(int i=1;i<R;++i)
    {
        while(j>=1)
        {
            int x=2*i+1;
            int y=2*j+1;
            if(1LL*x*x+1LL*y*y<=4LL*R*R)break;
            --j;
        }
        // ここで4倍する
        ans+=4LL*j;
    }

    cout<<ans<<endl;
    return 0;
}

