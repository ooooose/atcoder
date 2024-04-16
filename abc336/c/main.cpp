#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    long long n;
    cin >> n;
    n--;
    vector<int> a;
    while (n) {
        a.push_back(n % 5);
        n /= 5;
    }

    if (a.empty()) a.push_back(0);
    reverse(begin(a), end(a));
    for (int i = 0; i < a.size(); i++) cout << a.at(i) * 2;

    cout << endl;
    return 0;
}

