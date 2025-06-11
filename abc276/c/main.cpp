#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

// 貪欲法
// 右から見て初めてP[i]>P[i+1]となる場所iを探す
// さらに右からP[i]>P[j]かつ最大のjを探す。
// P[i]とP[j]を交換
// P[i+1:]を降順
// に並び替える
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;

    vector<int> P(N);

    for(int i=0;i<N;i++)cin>>P[i];
    for(int i=N-1;i>0;i--){
        if(P[i-1]>P[i]){
            for(int j=N-1;j>=i;j--){
                if(P[i-1]>P[j]){
                    swap(P[i-1],P[j]);
                    reverse(P.begin()+i,P.end());
                    for(int i=0;i<N;i++)cout<<P[i]<<(i+1!=N?" ":"");
                    cout<<endl;
                    return 0;
                }
            }
        }
    }

    return 0;
}

