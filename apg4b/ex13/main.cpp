#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }

    int sum = 0;

    for (int i = 0; i < N; i++) {
        sum += A.at(i);
    }

    int average = sum / N;

    for (int i = 0; i < N; i++) {
        if (A.at(i) > average) {
            cout << A.at(i) - average << endl;
        }
        else {
            cout << average - A.at(i) << endl;
        }
    }
}

