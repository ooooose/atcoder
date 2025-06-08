#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int H,W; 
    cin>>H>>W;
    vector<vector<char>> grid(H, vector<char>(W));
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin>>grid[i][j];
        }
    }
    
    int N; 
    cin >> N;
    map<char,set<char>> predToPrey;
    map<char,int> inDegree;
    set<char> species;
    for(int i=0;i<N;i++){
        char p,v;
        cin>>p>>v;
        species.insert(p);
        species.insert(v);
        predToPrey[p].insert(v);
        if(!inDegree.count(p))inDegree[p] = 0;
        if(!inDegree.count(v))inDegree[v] = 0;
        inDegree[v]++;
    }
    
    queue<char> q;
    for(auto s: species){
        if(inDegree[s] == 0) q.push(s);
    }
    vector<char> topo;
    while(!q.empty()){
        char cur = q.front(); q.pop();
        topo.push_back(cur);
        if(predToPrey.count(cur)){
            for(auto nxt: predToPrey[cur]){
                inDegree[nxt]--;
                if(inDegree[nxt]==0)q.push(nxt);
            }
        }
    }
    
    int di[8]={-1,-1,-1,0,0,1,1,1};
    int dj[8]={-1,0,1,-1,1,-1,0,1};
    
    for(auto s: topo){
        if(!predToPrey.count(s)) continue;
        auto preySet=predToPrey[s];
        for(int i=0;i<H;i++){
            for(int j=0;j<W;j++){
                if(grid[i][j] == s){
                    for(int d=0;d<8;d++){
                        int ni=i+di[d],nj=j+dj[d];
                        if(ni<0||nj<0||ni>=H||nj>=W) continue;
                        if(grid[ni][nj]=='-') continue;
                        if(preySet.count(grid[ni][nj])){
                            grid[ni][nj]='-';
                        }
                    }
                }
            }
        }
    }
    
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++) cout<<grid[i][j]<<(j==W-1?"\n":" ");
    }
    
    return 0;
}

