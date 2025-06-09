#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double Sx,Sy,Gx,Gy;
    cin>>Sx>>Sy>>Gx>>Gy;
    double ans=Sx+((Gx-Sx)/(Gy+Sy))*Sy;
    cout<<fixed<<setprecision(10)<<ans<<endl;
    return 0;
}

