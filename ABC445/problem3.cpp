#include <bits/stdc++.h>
using namespace std;

int main() {


    int n;
    if (!(cin >> n)) return 0;

    vector<int> A(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
    }
    vector<int> ans(n + 1);

    for (int i = n; i >= 1; i--) {
        if (A[i] == i) {

            ans[i] = i;
        } else {
            ans[i] = ans[A[i]];
        }
    }

    // Output print karein
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << (i == n ? "" : " ");
    }
    cout << endl;

    return 0;
}