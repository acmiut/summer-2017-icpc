#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, n; cin >> s >> n;
    vector< pair<int, int> > dragons;
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        dragons.push_back(make_pair(x, y));
    }

    // sort the dragons by their strength
    sort(dragons.begin(), dragons.end());

    bool dead = false;
    for (int i = 0; i < n; i++) {
        if (dragons[i].first < s)
            // Kirito beats this dragon and gets its bonus
            s += dragons[i].second;
        else {
            // Kirito can't beat and will die
            dead = true;
            break;
        }
    }

    if (dead)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}