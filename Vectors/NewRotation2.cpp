//
// Created by MIHIR MITHANI on 05/08/25.
//

#include <stdc++.h>
#include <arr.h>  // Your custom header

using namespace std;

void rotatevec(vector<int> &v, int k) {
    int n = v.size();
    if (n == 0) return;

    k = k % n;
    if (k == 0) return;

    int shifting = min(k, n - k);
    vector<int> temp(v.begin(), v.begin() + shifting);

    if (k <= n - k) {
        for (int i = k; i < n; ++i) {
            v[i - k] = v[i];
        }
        for (int i = 0; i < shifting; ++i) {
            v[n - k + i] = temp[i];
        }
    } else {
        for (int i = n - k - 1; i >= 0; --i) {
            v[i + k] = v[i];
        }
        for (int i = 0; i < shifting; ++i) {
            v[i] = temp[i];
        }
    }
}

int main() {
    vector<int> v;
    get_vector(v);
    int k;
    cout << "Enter Number Of rotations k :" << endl;
    cin >> k;
    rotatevec(v, k);
    print_vector(v);
    return 0;
}
