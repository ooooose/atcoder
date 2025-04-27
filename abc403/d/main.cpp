#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    long long d;
    cin >> n >> d;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (d == 0) {
        unordered_map<long long, int> freq;
        for (long long x : a) {
            freq[x]++;
        }
        
        int total_removal = 0;
        for (auto [_, count] : freq) {
            total_removal += (count - 1);
        }
        
        cout << total_removal << endl;
        return 0;
    }

    unordered_map<long long, int> freq;
    for (long long x : a) {
        freq[x]++;
    }
    unordered_map<long long, vector<long long>> graph;
    set<long long> conflict_nodes;
    
    for (const auto& [val, _] : freq) {
        if (freq.count(val + d)) {
            graph[val].push_back(val + d);
            graph[val + d].push_back(val);
            conflict_nodes.insert(val);
            conflict_nodes.insert(val + d);
        }
    }

    unordered_map<long long, int> color;
    int total_removal = 0;

    for (long long start : conflict_nodes) {
        if (color.count(start)) continue;

        queue<long long> q;
        q.push(start);
        color[start] = 0;
        
        int count0 = 0, count1 = 0;
        
        while (!q.empty()) {
            long long curr = q.front();
            q.pop();

            if (color[curr] == 0) {
                count0 += freq[curr];
            } else {
                count1 += freq[curr];
            }

            for (long long next : graph[curr]) {
                if (!color.count(next)) {
                    color[next] = 1 - color[curr];
                    q.push(next);
                }
            }
        }

        total_removal += min(count0, count1);
    }
    
    cout << total_removal << endl;
    
    return 0;
}