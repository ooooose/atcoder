#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int H1,W1;cin>>H1>>W1;
    int A[15][15],B[15][15];
    for(int i=1;i<=H1;i++)for(int j=1;j<=W1;j++)cin>>A[i][j];   
    int H2,W2;cin>>H2>>W2;
    for(int i=1;i<=H2;i++)for(int j=1;j<=W2;j++)cin>>B[i][j];   

    for(int bitx=0;bitx<(1<<H1);bitx++){
        for(int bity=0;bity<(1<<W1);bity++){
            vector<int> hvec,wvec;
            for(int i=1;i<=H1;i++)if((bitx&(1<<(i-1)))==0)hvec.push_back(i);
            for(int i=1;i<=W1;i++)if((bity&(1<<(i-1)))==0)wvec.push_back(i);
            if(hvec.size()!=H2||wvec.size()!=W2)continue;

            bool matched=true;
            for(int i=1;i<=H2;i++){
              for(int j=1;j<=W2;j++){
                 if(A[hvec[i-1]][wvec[j-1]]!=B[i][j]){
                     matched=false;
                     break;
                 }
              }
            }
            if(matched){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}

