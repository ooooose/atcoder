#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<set<int>> A(M);

    for(int i=0;i<M;i++){
        int C;
        cin>>C;
        for(int j=0;j<C;j++){
            int x;
            cin>>x;
            A[i].insert(x);
        }
    }

    int ans=0;
    for (int bit=1;bit<(1<<M);bit++){
        set<int> stock;
        for (int i=0;i<M;i++){
            if (bit&(1<<i)){
                stock.insert(A[i].begin(), A[i].end());
            }
        }

        if ((int)stock.size()==N) ans++;
    }

    cout<<ans<<endl;
    return 0;
}

