#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {    
    int N, M;
    cin >> N >> M;
    vector<P> events;
    
    rep(i, M) {
        int L, R;
        cin >> L >> R;
        events.push_back({L, 1});
        events.push_back({R + 1, -1});
    }
    sort(events.begin(), events.end());
    
    int current = 0;
    int min_c = M + 1;
    int pos = 1;
    
    for (auto& event : events) {
        if (pos <= N && event.first > pos) {
            min_c = min(min_c, current);
        }
        
        current += event.second;
        pos = max(pos, event.first);
        
        if (pos > N) break;
    }
    
    if (pos <= N) {
        min_c = min(min_c, current);
    }
    
    cout << min_c << endl;
    return 0;
}