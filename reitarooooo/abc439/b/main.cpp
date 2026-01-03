#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
// g++ -std=c++23 main.cpp

int solve(int num) {
    int sum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;cin>>N;
    
    set<int> seen;
    int current=N;
    
    while (true) 
    {
        if (current == 1)
        {
            cout << "Yes" << endl;
            return 0;
        }
        
        if (seen.count(current))
        {
            cout << "No" << endl;
            return 0;
        }
        
        seen.insert(current);
        current = solve(current);
    }
    
    return 0;
}
