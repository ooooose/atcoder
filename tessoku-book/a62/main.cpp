#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int N, M, A[100009], B[100009];
vector<int> G[100009];
// 訪れた場合の真偽値を管理
bool visited[100009];

void dfs(int pos) {
    visited[pos] = true;

    for (int i = 0; i < G[pos].size(); i++) {
        int nxt = G[pos][i];
        // 訪れていなければ探索継続
        if (visited[nxt] == false) dfs(nxt);
    }
    return;
}

int main() {
    cin >> N >> M;
    for(int i = 1; i <= M; i++) {
        cin >> A[i] >> B[i];
        // 木を作成
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    } 

    // 全てのvisitedをfalseに設定してdfs探索を開始
    for(int i = 1; i <= N; i++) visited[i] = false;
    dfs(1);

    string Answer = "The graph is connected.";
    
    // 連結出なければAnswerを`The graph is not connected.`に変換
    for(int i = 1; i <= N; i++) if(visited[i] == false) Answer = "The graph is not connected.";

    cout << Answer << endl;
    return 0;
}

