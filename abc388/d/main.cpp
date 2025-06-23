#include <bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;cin>>N;
    vector<int> A(N+1);
    for (int i=1;i<=N;i++)cin>>A[i];
   
    // rは各宇宙人が成人するまでに他の宇宙人から受け取った石の合計
    // dは各宇宙人が成人するときに実際に渡す石の枚数
    // 全ての配列は1indexで管理する
    vector<ll> diff(N+2,0),r(N+1,0),d(N+1,0),B(N+1,0);
    for (int i=1;i<=N;i++)
    {
        // i番目の宇宙人が成人する時点でこれまでに受けた寄付数r[i]はdiffの累積和で求められる
        if(i==1)r[i]=diff[i];
        else r[i]=r[i-1]+diff[i];
 
        // 0になるまでかもしくはiからNまでのどちらか小さい法が寄付する石の合計
        d[i]=min((ll)N-i,(ll)A[i]+r[i]);
 
        // 宇宙人iが寄付できる回数（d[i]）だけ、区間[i+1,i+d[i]]に対して寄付が生じる
        // d[i]が0の場合は寄付が生じない
        // imos法で差分配列を管理
        if(d[i]>0)
        {
            diff[i+1]++;
            diff[i+d[i]+1]--;
        }
 
        // B[i]は元々持っている石A[i]に受け取る石の枚数r[i]を足して、渡す石d[i]を引く
        B[i]=A[i]+r[i]-d[i];
    }
    
    for (int i=1;i<=N;i++)cout<<B[i]<<(i==N?"\n":" ");
    return 0;
}
