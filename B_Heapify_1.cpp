#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            vector<int> current_values;
            vector<int> required_indices;

            // Traverse the chain: i, 2i, 4i, 8i...
            for (long long j = i; j <= n; j *= 2) {
                current_values.push_back(a[j]);
                required_indices.push_back((int)j);
            }


            sort(current_values.begin(), current_values.end());


            if (current_values != required_indices) {
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}