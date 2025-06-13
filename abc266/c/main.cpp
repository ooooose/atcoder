#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

struct P{
    int x,y;
};

int cross(const P& a, const P& b, const P& c){
    int vx1=b.x-a.x;
    int vy1=b.y-a.y;
    int vx2=c.x-a.x;
    int vy2=c.y-a.y;
    return vx1*vy2-vy1*vx2;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    P A,B,C,D;
    cin>>A.x>>A.y;
    cin>>B.x>>B.y;
    cin>>C.x>>C.y;
    cin>>D.x>>D.y;

    int cross1=cross(A,B,C);
    int cross2=cross(B,C,D);
    int cross3=cross(C,D,A);
    int cross4=cross(D,A,B);

    if((cross1>0&&cross2>0&&cross3>0&&cross4>0)||
        (cross1<0&&cross2<0&&cross3<0&&cross4<0)){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
    return 0;
}

