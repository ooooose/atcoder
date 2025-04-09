#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(){
    vector<int> bk(13,0);
    rep (i, 7) {
      int x;
      cin >> x;
      bk[x-1]++;
    }
    sort(bk.rbegin(),bk.rend());
    if(bk[0]>=3 && bk[1]>=2){cout << "Yes\n";}
    else{cout << "No\n";}
    return 0;
  }

