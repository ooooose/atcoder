#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

// next_permutaionで長さNの順列のパターンを全部試す
// Mの文字列に対して探索して2つマッチする判定をする
int main() {
    int N,M;
    cin>>N>>M;

    vector<string> S(N);
    rep(i,N)cin>>S[i];
    
    sort(S.begin(), S.end());

    do {
        bool ok=true;
        rep(i,N-1){
            int diff=0;
            rep(j,M) {
                if (S[i][j]!=S[i+1][j])diff++;
            }
            if (diff!=1){
                ok=false;
                break;
            }
        }
        if(ok){
            cout << "Yes" << endl;
            return 0;
        }
    }while(next_permutation(S.begin(),S.end()));

    cout << "No" << endl;
    return 0;
}

