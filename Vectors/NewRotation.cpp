//
// Created by MIHIR MITHANI on 04/08/25.
//
#include  <stdc++.h>
#include <arr.h>

auto rotatevec(vector<int> &v) {
    int k;
    cin>>k;
    int n=v.size();
    k=k%n;
    vector<int> temp(v.begin()+(n-k), v.end());
    print_vector(temp);
    for (int i=0;i<k;i++) {
        temp.push_back(v[i]);
    }
    return temp;
}

int main() {
    vector<int> v;
    get_vector(v);
    vector<int> rotated=rotatevec(v);
    print_vector(rotated);
    return 0;
}