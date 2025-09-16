#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;cin>>T;
    while(T--)
    {
        int A,B,C;cin>>A>>B>>C;
        int abc=min({A,B,C});
        A-=abc;
        B-=abc;
        C-=abc;
        int acc=0,aac=0;
        if(A>C)
        {
            
            if(A/2>C)aac=C;
            else acc=A/2;
        }
        else
        {
            if(A<C/2)acc=A;
            else acc=C/2;
        }
        cout<<abc+acc+aac<<endl;
    }

    return 0;
}

