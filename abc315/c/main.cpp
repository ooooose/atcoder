#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n;
    cin >> n;
    // 味ごとに美味しさを管理
    map<int, vector<int>> flavor_map;
    
    rep(i,n) {
        int f,s;
        cin >> f >> s;
        flavor_map[f].push_back(s);
    }

    // 各味ごとに美味しさを降順にソート
    for (auto& [flavor, scores] : flavor_map) {
        sort(scores.rbegin(), scores.rend());
    }

    int max_score = 0;
    vector<int> top_scores;

    // 同じ味のアイスを2個食べるパターンと異なる味のアイスを2つ選んで食べるパターンを考慮してmax_scoreを更新
    // 異なる味の最大2つの美味しさを考慮
    for(auto & [flavor, scores] : flavor_map) {
        if (!scores.empty()) top_scores.push_back(scores[0]);
    }

    sort(top_scores.rbegin(), top_scores.rend());
    if(top_scores.size() >= 2) {
        max_score = max(max_score, top_scores[0] + top_scores[1]);
    }
    
    // 同じ味の最大2つの美味しさを考慮
    for (auto &[f, scores] : flavor_map) {
        if (scores.size() >= 2) {
            int sum = scores[0] + scores[1] / 2;
            max_score = max(max_score, sum);
        }
    }

    cout << max_score << endl;

    return 0;
}

