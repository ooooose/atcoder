#include <bits/stdc++.h>
using namespace std;

int rev(int x) {
    string s=to_string(x);
    reverse(s.begin(),s.end());
    return stoi(s);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int X, Y;
    cin >> X >> Y;
    vector<long long> A(11);
    A[1] = X;
    A[2] = Y;
    for (int i=3;i<=10;i++)
    {
        long long sum=A[i-1]+A[i-2];
        string s=to_string(sum);
        reverse(s.begin(),s.end());
        A[i]=stoll(s);
    }

    cout<<A[10]<<endl;
    return 0;
}

