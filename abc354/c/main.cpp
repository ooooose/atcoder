#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

struct Card {
    int a;
    int c;
    int index;
};


int main() {
    int n;
    cin >> n;

    vector<Card> cards(n);
    rep(i, n) {
        cin >> cards[i].a >> cards[i].c;
        cards[i].index = i;
    }

    sort(cards.begin(), cards.end(), [](const Card& x, const Card& y) {
        return x.c < y.c;
    });

    vector<int> ans;

    int v = 0;
    rep(i, n) {
        if (cards[i].a > v) {
          v = cards[i].a;
          ans.push_back(cards[i].index + 1);
        }
    }
    sort(ans.begin(), ans.end());

    cout << ans.size() << endl;
    for (int i : ans) {
        cout << i << " ";
    }
    cout << endl;
    return 0; 
}

