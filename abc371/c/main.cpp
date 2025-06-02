#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using P = pair<int, int>;

int main() {
    int N, Mg, Mh;
    set<P> G, H;
    cin >> N;
    cin >> Mg;

    rep(i, Mg) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        G.emplace(u, v);
        G.emplace(v, u);
    }
    
    cin >> Mh;
    rep(i, Mh) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        H.emplace(a, b);
        H.emplace(b, a);
    }

    vector<vector<int>> A(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            cin >> A[i][j];
            A[j][i] = A[i][j];
        }
    }

    vector<int> P(N);
    iota(P.begin(), P.end(), 0);

    int ans = 1e9;

    do {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            for (int j = i+1; j < N; j++) {
                bool h_contains = H.count({i, j}) > 0;
                bool g_contains = G.count({P[i], P[j]}) > 0;
                if (h_contains != g_contains) {
                    sum += A[i][j];
                }
            }
        }
        ans = min(ans, sum);
    } while (next_permutation(P.begin(), P.end()));

    cout << ans << endl;
    return 0;
}

