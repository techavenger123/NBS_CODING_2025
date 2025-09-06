//
// Created by MIHIR MITHANI on 18/08/25.
//

#include <stdc++.h>
#include <arr.h>

vector<int> prefix(vector<int> &v) {
    int n = v.size();
    vector<int> result(n,0);
    result[0] = v[0];
    for(int i=1;i<n;i++) {
        result[i] = v[i] + result[i-1];
    }
    return result;
}
void prefixfaster(vector<int> &v) {
    int n = v.size();
    for (int i = 1; i < n; i++) {
        v[i]=v[i]+v[i-1];
    }
    print_vector(v);
}
vector<int> suffix(vector<int> &v) {
    int n = v.size();
    vector<int> result(n,0);
    result[n-1] = v[n-1];
    for (int i=n-1; i>=0; i--) {
        result[i] = v[i] + result[i+1];
    }
    return result;
}
int main() {
    vector<int> v;
    get_vector(v);
    vector<int> v2;
    v2=prefix(v);
    cout<<"Prefix : ";
    print_vector(v2);
    vector<int> v3;
    v3=suffix(v);
    cout<<"Suffix : ";
    print_vector(v3);
    prefixfaster(v);
    return 0;
}