#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,Q;
    cin>>N>>Q;
    // フォロー関係をmapで表現、フォローしている人をsetで管理する
    unordered_map<int, unordered_set<int>> F;

    while(Q--){
        int T,A,B;cin>>T>>A>>B;
        A--;B--;
        if(T==1) {
            // AのフォローにBを追加
            F[A].insert(B);
        }
        else if(T==2){
            // AのBフォローを解除
            F[A].erase(B);
        }
        else if(T==3){
            // 相互フォローが実現しているかを確認
            if(F[A].count(B) && F[B].count(A)){
                    cout<<"Yes"<<endl;
            }
            else cout<<"No"<<endl;
        }
    }
    
    return 0;
}

