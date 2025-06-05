#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int N,X,A[100009];
int search(int x) {
    int l=0,r=N-1;
    while(l<=r) {
        int mid=(l+r)/2;
        if(A[mid]==x)return mid;
        else if(A[mid]<x)l=mid+1;
        else r=mid-1;
    }
    return -1;
}

int main() {
    cin>>N>>X;
    rep(i,N)cin>>A[i];

    int idx=search(X);
    cout << idx+1<< endl;

    return 0;
}

