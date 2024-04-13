#include<bits/stdc++.h>
using namespace std;
int main() {
    int N, b;
    int a = 0;
    cin >> N;
    b = N;
    while (N!=0)
    {
        a += N % 10;
        N /= 10;
    }

    if (b%a==0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

