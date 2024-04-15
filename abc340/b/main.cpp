#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int num, q;
        cin >> num >> q;
        
        if (num == 1) {
            v.push_back(q);
        } 
        else if(num == 2) {
            int target = v.size() - q; 
            cout << v.at(target) << endl;
        }
    }
}

