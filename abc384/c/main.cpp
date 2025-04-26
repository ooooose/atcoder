#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <ranges>
using namespace std;
int main() {
    array<int, 5> point{};
    for (auto&& p : point)
        cin >> p;

    vector<pair<int, string>> standings;
    for (int bit = 1; bit < 32; ++bit) {
        int solved_point = 0;
        string name = "";
        for (int digit = 0; digit < 5; ++digit)
            if (bit & 1 << digit) {

                solved_point += point[digit];
                name += "ABCDE"[digit];
            }

        standings.emplace_back(solved_point, name);
    }

    ranges::sort(standings, less{}, &pair<int, string>::second);

    ranges::stable_sort(standings, greater{}, &pair<int, string>::first);

    for (const auto& name : standings | views::values)
        cout << name << endl;
    return 0;
}