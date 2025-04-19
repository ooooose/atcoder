#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> dislike_count(m);
    vector<vector<int>> ingredient_to_dishes(n+1);
    
    rep(i, m) {
        int k;
        cin >> k;
        dislike_count[i] = k;
        
        rep(j, k) {
            int ingredient;
            cin >> ingredient;
            ingredient_to_dishes[ingredient].push_back(i);
        }
    }
    
    int eatable_count = 0;
    
    rep(i, n) {
        int b;
        cin >> b;
        
        for (int dish_id : ingredient_to_dishes[b]) {
            dislike_count[dish_id]--;
            if (dislike_count[dish_id] == 0) {
                eatable_count++;
            }
        }
        
        cout << eatable_count << endl;
    }
    
    return 0;
}