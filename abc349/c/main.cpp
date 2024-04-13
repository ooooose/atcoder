#include<bits/stdc++.h>
using namespace std;
int main() {
    std::string port;
    std::string T;
    std::cin >> port;
    std::cin >> T;

    for (char& c : T) {
        c = std::tolower(static_cast<unsigned char>(c));
    }

    int pointer = 0;

    for (int i = 0; i < port.size(); i++) {
       char target = T.at(pointer);
       if (target == port.at(i)) {
            pointer++;
       }
       if (pointer == 3) break;
    }

    if (pointer == 3) {
        cout << "Yes" << endl;
    } 
    else if (pointer == 2 && T.at(T.size() - 1) == 'x') { 
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}

