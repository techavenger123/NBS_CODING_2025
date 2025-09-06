//
// Created by MIHIR MITHANI on 06/08/25.
//

#include <stdc++.h>
#include <arr.h>

void rotate_right(vector<int> &v) {
    int n = v.size();
    int k;
    cin >> k;
    if (n == 0 || k == 0) return;
    k %= n;
    if (k == 0) return;
    int temp1 = v[0];
    int m = 0;
    int origin = 0;
    for (int i = 0; i < n; i++) {
        int temp2 = v[(m + k) % n];
        v[(m + k) % n] = temp1;
        temp1 = temp2;
        m = (m + k) % n;
        if (m == origin) {
            origin++;
            m = origin;
            temp1 = v[m];
        }
    }
}

int main() {
    vector<int> v;
    get_vector(v);
    rotate_right(v);
    print_vector(v);
    return 0;
}
