//
// Created by MIHIR MITHANI on 18/08/25.
//

#include <stdc++.h>
#include <arr.h>

int findmajority(vector<int> &v) {
    unordered_map<int, int> mp;
    int n=v.size();
    for (int i:v) {
        mp[i]++;
        if (mp[i] > n/2) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> v;
    get_vector(v);
    print_vector(v);
    (findmajority(v)==-1) ? cout <<"No Majority Found" :cout << "majority number is: " << findmajority(v) << endl;
    return 0;
}