#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int N,Q;
vector<int> S;

bool binary_search(int key)
{
    int left=0,right=N;
    while(right>=left)
    {
        int mid=left+(right-left)/2;
        if(S[mid]==key) return true;
        else if(S[mid]>key) right=mid-1;
        else if(S[mid]<key) left=mid+1;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>N;
    S.resize(N);
    for(int i=0;i<N;i++)cin>>S[i];
    sort(S.begin(),S.end());
    cin>>Q;
    int cnt=0;
    for(int i=0;i<Q;i++)
    {
        int t;cin>>t;
        if(binary_search(t))cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

