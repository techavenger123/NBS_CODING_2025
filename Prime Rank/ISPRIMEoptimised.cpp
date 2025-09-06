//
// Created by MIHIR MITHANI on 22/08/25.
//
#include <stdc++.h>
#include <arr.h>


void isprime(int n) {
    map<int,int> mp;
    int currentrank=1;
    vector<bool> v(n,true);
    for (int i=2;i<=n/i;i++) {
        if (v[i]){mp[currentrank++]=i;}
        for (int j=i*i;j<=n;j+=i) {
            v[j]=false;
        }
    }
    for (int i= 1 + sqrt(n);i<=n;i++) {
        if (v[i]) {
            mp[currentrank++]=i;
        }
    }
    for (pair<int,int> p:mp) {
        cout<<p.first<<" "<<p.second<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    isprime(n);
    return 0;
}