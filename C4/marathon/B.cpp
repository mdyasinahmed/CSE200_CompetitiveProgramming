#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> dominoes(n);
    vector<int> result(n);

    for (int i = 0; i < n; ++i) {
        cin >> dominoes[i].first >> dominoes[i].second;
        result[i] = i + 1;
    }

    sort(result.begin(), result.end(), [&](int a, int b) {
        return min(dominoes[a - 1].first, dominoes[a - 1].second) < min(dominoes[b - 1].first, dominoes[b - 1].second);
    });

    for (int i = 1; i < n; ++i) {
        int prev = result[i - 1] - 1;
        int curr = result[i] - 1;

        if (min(dominoes[prev].second, dominoes[curr].first) < min(dominoes[prev].first, dominoes[curr].second)) {
            swap(result[i], result[i - 1]);
        }
    }

    for (int i = 0; i < n; ++i) {
        int idx = result[i] - 1;
        int left = dominoes[idx].first;
        int right = dominoes[idx].second;

        if (i < n - 1 && min(right, dominoes[result[i + 1] - 1].first) >= min(left, right)) {
            cout << result[i] << " +\n";
        } else if (i < n - 1 && min(right, dominoes[result[i + 1] - 1].second) >= min(left, right)) {
            cout << result[i] << " -\n";
        } else {
            cout << result[i] << " +\n";
        }
    }

    return 0;
}
