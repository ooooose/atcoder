#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp
using P = pair<int, int>;

const map<char, P> dir = {
    {'R', {1, 0}},
    {'L', {-1, 0}},
    {'U', {0, 1}},
    {'D', {0, -1}}
};

int main() {
    int N, M, H, K;
    cin >> N >> M >> H >> K;

    string S; cin >> S;

    set<P> portions;
    rep(i, M) {
        int x, y;
        cin >> x >> y;
        portions.insert({x, y});
    } 

    P current = {0, 0};
    rep(i, S.size()) {
        H--;
        current.first += dir.at(S[i]).first;
        current.second += dir.at(S[i]).second;
        if (H < 0) {
            cout << "No" << endl;
            return 0;
        }

        if(H < K && portions.count(current)) {
            H = K;
            portions.erase(current);
        }
    }
    
    cout << "Yes" << endl;
    return 0;
}

