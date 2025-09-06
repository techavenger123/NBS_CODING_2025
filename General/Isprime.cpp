//
// Created by MIHIR MITHANI on 31/07/25.
//
#include <stdc++.h>
#include <arr.h>
auto isprime(int &n) {
    for (int i = 2; i <n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    cout<<isprime(n);
}

int main() {
    solve();
    return 0;
}