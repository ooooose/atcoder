#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,X,Y,Z;
    cin>>N>>X>>Y>>Z;
    vector<pair<int,int>> A(N),B(N),S(N);
    vector<bool> C(N,false);
    for(int i=0;i<N;i++){
        cin>>A[i].first;
        S[i].first=A[i].first;
        A[i].second=i;
    }
    for(int i=0;i<N;i++){
        cin>>B[i].first;
        S[i].first+=B[i].first;
        B[i].second=i;
        S[i].second=i;
    }
    sort(A.begin(), A.end(), [](const pair<int,int> &p1, const pair<int,int> &p2) {
        if(p1.first != p2.first) return p1.first > p2.first;
        return p1.second < p2.second;
    });
    sort(B.begin(), B.end(), [](const pair<int,int> &p1, const pair<int,int> &p2) {
        if(p1.first != p2.first) return p1.first > p2.first;
        return p1.second < p2.second;
    });
    sort(S.begin(), S.end(), [](const pair<int,int> &p1, const pair<int,int> &p2) {
        if(p1.first != p2.first) return p1.first > p2.first;
        return p1.second < p2.second;
    });


    for(int i=0;i<X;i++)C[A[i].second]=true;

    int cnt=0;
    for (int i=0;i<N&&cnt<Y;i++) 
    {
        if(C[B[i].second])continue;
        C[B[i].second]=true;
        cnt++;
    }

    cnt=0;
    for(int i=0;i<N&&cnt<Z;i++)
    {
        if(C[S[i].second])continue;
        C[S[i].second]=true;
        cnt++;
    }
    for(int i=0;i<N;i++)if(C[i])cout<<i+1<<'\n';
    return 0;
}

