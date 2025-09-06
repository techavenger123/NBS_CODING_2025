//
// Created by MIHIR MITHANI on 29/08/25.
//
#include <stdc++.h>
#include <arr.h>

typedef unordered_map<int,int> uom;
typedef unordered_set<int> us;
void intersection(std::vector<int> &v1, std::vector<int> &v2) {
    // Sort the vectors to use the two-pointer technique
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int it1 = 0, it2 = 0;
    vector<int> res;
    while (it1 < v1.size() && it2 < v2.size()) {
        if (v1[it1] < v2[it2]) {
            it1++;
        } else if (v1[it1] > v2[it2]) {

            it2++;
        } else {
            if (res.empty() || v1[it1] != res.back()) {
                res.push_back(v1[it1]);
            }
            it1++;
            it2++;
        }
    }
    print_vector(res);
}
int main() {
    vector<int> v1={1,2,3,4,5,6},v2={10,21,3,4,5,63};
    // get_vector(v1);
    // get_vector(v2);
    return 0;
}