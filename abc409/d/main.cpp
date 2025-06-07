#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        string S;
        cin>>S;

        int l=-1;
        for (int i=0;i<N-1;i++){
            if (S[i]>S[i+1]){
                l=i;
                break;
            }
        }

        if (l==-1) {
            cout<<S<<endl;
            continue;
        }

        int r=N;
        for (int j=l+1;j<N;j++){
            if (S[l]<S[j]){
                r=j;
                break;
            }
        }
        cout<<S.substr(0,l)+S.substr(l+1,r-l-1)+S[l]+S.substr(r)<<endl;
    }
    return 0;
}


