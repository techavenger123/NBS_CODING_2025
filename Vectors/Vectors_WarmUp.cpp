//
// Created by MIHIR MITHANI on 02/08/25.
//

#include <stdc++.h>
#include <arr.h>

void rev_vector(vector<int> &v) {
    for (int i=0,j=v.size()-1;i<j;i++,j--) {
        swap(v[i],v[j]);
    }
}
int main() {
    vector<int> v;
    get_vector(v);
    rev_vector(v);
    print_vector(v);
    return 0;
}
