#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;cin>>N;
    string S;cin>>S;
    set<string> seen;
    for(int x1=0;x1<10;x1++)for(int x2=0;x2<10;x2++)for(int x3=0;x3<10;x3++){
        for(int i=0;i<N;i++){
            if(x1==S[i]-'0'){
                for(int j=i+1;j<N;j++){
                    if(x2==S[j]-'0'){
                        for(int k=j+1;k<N;k++){
                            if(x3==S[k]-'0'){
                                string code=to_string(x1)+to_string(x2)+to_string(x3);
                                seen.insert(code);
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<seen.size()<<endl;
    return 0;
}

