//
// Created by MIHIR MITHANI on 27/08/25.
//

#include <stdc++.h>
#include <arr.h>

typedef unordered_map<int,int> uom;
typedef unordered_set<int> us;


us intersaction(vector<int> &v1,vector<int> &v2) {
    us s;
    uom m;
    for (int i:v1) {
        m[i]++;
    }
    for (int i:v2) {
        m[i]++;
    }
    for (pair<int,int> p:m) {
        if (p.second==2) {
            s.insert(p.first);
        }
    }
    return s;
}
us difference(vector<int> &v1,vector<int> &v2) {
    us s;
    int m=v2.size(),n=v1.size();
    uom mp;
    for (int i:v1) {
        mp[i]++;
    }
    for (int i:v2) {
        mp[i]++;
    }
    for (pair<int,int> p:mp) {
        if (p.second<2) {
            s.insert(p.first);
        }
    }
    return s;
}
void printset(us &s) {
    for (int i:s) {
        cout<<i<<" ";
    }
    cout<<endl;
}
int main() {
    vector<int> v1,v2;
    get_vector(v1);
    get_vector(v2);
    us v3=intersaction(v1,v2);
    us v4=difference(v1,v2);
    printset(v3);
    printset(v4);
    return 0;
}