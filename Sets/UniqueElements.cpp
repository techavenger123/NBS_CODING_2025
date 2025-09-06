//
// Created by MIHIR MITHANI on 27/08/25.
//
#include <stdc++.h>
#include <arr.h>

void uniques(unordered_map<int,int> &map) {
    int n;
    cin>>n;
    unordered_set<int> s;
    for(int j=0;j<n;j++) {
        int a;
        cin>>a;
        map[a]++;
        if (map[a]==1) {
            s.insert(a);
        }
        else if (map[a]==2){
            s.erase(a);
        }
    }
    for (int i:s) {
        cout<<i<<" ";
    }
}

int main() {
    unordered_map<int,int> map;
    uniques(map);
}