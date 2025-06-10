#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    long long K;
    cin>>K;
    long long limit=20;

    long long current=1;
    for(long long i=1;i<limit;i++){
        current*=i;
        if(current%K==0){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<K<<endl;

    
    return 0;
}

