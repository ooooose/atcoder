#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S;
    cin>>S;
    vector<vector<char>> balls(S.size());
    vector<bool> used(26,false);
    int current=0;
    rep(i,S.size()){
        char s=S[i];
        if(s=='('){
            current++;
        }
        else if(s==')'){
            for(char c: balls[current])used[c-'a']=false;
            balls[current].clear();
            current--;
        }
        else {
            if(used[s-'a']){
                cout<<"No"<<endl;
                return 0;
            }
            used[s-'a']=true;
            balls[current].push_back(s);
        }
    }
    if(current!=0)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    
    return 0;
}

