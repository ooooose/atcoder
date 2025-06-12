#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin>>N;
    multiset<int> A;
    for(int i=0;i<N;i++){
        int a;
        cin>>a;
        A.insert(a);
    }
    int next=1;
    int trade=0;
    while(true){
        auto it=A.find(next);
        if(it!=A.end()){
            A.erase(it);
            next++;
        }
        else{
            if((int)A.size()>=2){
                A.erase(prev(A.end()));
                A.erase(prev(A.end()));
                next++;
            }
            else break;
        }
    }
    cout<<(next==1?0:next-1)<<endl;
    return 0;
}

