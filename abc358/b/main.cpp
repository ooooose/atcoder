#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int N, A;
    cin >> N >> A;

    vector<int> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec.at(i);
    }
    int target = 0;

    for (int i = 0; i < N; i++) {
        if (target < vec.at(i)) target = vec.at(i) + A;
        else target += A;
            
        cout << target << endl;
    }
    
    return 0;
}

