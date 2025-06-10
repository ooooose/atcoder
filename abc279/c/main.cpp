#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int H,W;
    cin>>H>>W;
    vector<string> S(H),T(H);

    for(int i=0;i<H;i++)cin>>S[i];
    for(int i=0;i<H;i++)cin>>T[i];
    vector<string> SR(W),TR(W);
    for(int j=0;j<W;j++){
        string s_tmp="";
        string t_tmp="";
        for(int i=0;i<H;i++){
            s_tmp+=S[i][j];
            t_tmp+=T[i][j];
        }
        SR.push_back(s_tmp);
        TR.push_back(t_tmp);
    }
    sort(SR.begin(),SR.end());
    sort(TR.begin(),TR.end());

    if(SR==TR)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}

