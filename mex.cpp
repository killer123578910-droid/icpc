#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// Hàm tính MEX của một tập hợp các số
int calculate_mex(const vector<int>& elements) {
    set<int> s(elements.begin(), elements.end());
    int mex = 0;
    while (s.count(mex)) {
        mex++;
    }
    return mex;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Chiến thuật: Sắp xếp tăng dần để MEX tiền tố và hậu tố khác nhau
    sort(a.begin(), a.end());

    bool possible = true;
    for (int i = 1; i < n; i++) {
        // Tạo mảng tiền tố từ [0...i-1] (độ dài i)
        vector<int> prefix(a.begin(), a.begin() + i);
        // Tạo mảng hậu tố từ [i...n-1]
        vector<int> suffix(a.begin() + i, a.end());

        if (calculate_mex(prefix) == calculate_mex(suffix)) {
            possible = false;
            break;
        }
    }

    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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