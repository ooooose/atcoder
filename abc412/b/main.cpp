#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string S,T;cin>>S>>T;
    
    set<char> tset;
    for (char  ch: T)tset.insert(ch);
    bool ok=true;
    for(int i=1;i<(int)S.size();i++)
    {
        if(isupper(S[i]))if(tset.find(S[i-1])==tset.end())
        {
            ok = false;
            break;
        }
    }
    
    cout<<(ok?"Yes":"No")<<endl;
    return 0;
}
