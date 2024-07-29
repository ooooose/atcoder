#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
int liner_length(int x1, int x2, int y1, int y2) {
    return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}

int main() {
    int Ax, Ay;
    cin >> Ax >> Ay;
    int Bx, By;
    cin >> Bx >> By;
    int Cx, Cy;
    cin >> Cx >> Cy;

    int liner1 = liner_length(Ax, Bx, Ay, By);
    int liner2 = liner_length(Bx, Cx, By, Cy);
    int liner3 = liner_length(Ax, Cx, Ay, Cy);
    if ((liner1 == liner2 + liner3) || (liner2 == liner1 + liner3) || (liner3 == liner1 + liner2)) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}

