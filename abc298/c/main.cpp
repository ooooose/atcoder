#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

const int N=200010;
const int M=200010;
vector<vector<int>> box(N,vector<int>());
vector<set<int>> card(M);

int main() {
    int n,q;
    cin>>n>>q;
    vector<vector<int>> ans;

    while(q--){
        int t;
        cin>>t;
        if(t==1){
            int i,j;
            cin>>i>>j;
            card[i].insert(j);
            box[j].push_back(i);
        }
        else if(t==2){
            int i;
            cin>>i;
            sort(box[i].begin(), box[i].end());
            for(int j=0;j<box[i].size();j++){
                cout<<box[i][j]<<" ";
            }
            cout<<endl;
        }
        else if(t==3){
            int i;
            cin>>i;
            for(auto c : card[i])cout<<c<<" ";
            cout<<endl;
        }
    }
    
    return 0;
}

