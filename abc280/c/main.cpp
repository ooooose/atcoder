#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    string S,T;
    cin>>S>>T;
    for(int i=0;i<S.size();i++){
        if(S[i]!=T[i]){
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<T.size()<<endl;
    return 0;
}

