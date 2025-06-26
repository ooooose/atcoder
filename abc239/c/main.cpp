#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    vector<int> A(8),B(8);
    vector<pair<int,int>> dir={
        {1,2},{2,1},{1,-2},{-1,2},
        {-1,2},{-2,1},{-2,1},{2,-1}
    };

    for(auto [dx,dy]:dir)
    {
        int nx=x1+dx;
        int ny=y1+dy;
        int d2=(nx-x2)*(nx-x2)+(ny-y2)*(ny-y2);
        if(d2==5)
        {
            cout<<"Yes"<<endl;
            return 0;
        }
    }

    cout<<"No"<<endl;
    return 0;
}

