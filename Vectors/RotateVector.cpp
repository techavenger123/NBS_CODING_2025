//
// Created by MIHIR MITHANI on 04/08/25.
//
#include <stdc++.h>
#include <arr.h>

void rotatevec(vector<int> &v) {
    int k;
    cin>>k;
    k=k%v.size();
    for (int i=0;i<k;i++) {
        int temp=v[v.size()-1];
        for (int j=v.size()-1; j>0; j--) {
            v[j]=v[j-1];
        }
        v[0]=temp;
    }
}
int main() {
    vector<int> v;
    get_vector(v);
    print_vector(v);
    rotatevec(v);
    print_vector(v);
}