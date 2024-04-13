#include<bits/stdc++.h>
using namespace std;
int main() {
    long long L, R;
    cin >> L >> R;
    vector<int> vec;
    for (int i = L; i <= R; i++) {
        vec += i;
    }

    for (int i = 0; i < vec.size(); i++) {
        int index = vec.at(i);
        int count = 0;
        while (index % 2 != 0) {
            index /= 2;
            count++;
        }
        

    }
}

