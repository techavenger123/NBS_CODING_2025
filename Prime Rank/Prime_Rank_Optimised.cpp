//
// Created by MIHIR MITHANI on 20/08/25.
//
#include <stdc++.h>
#include <arr.h>

void primelist(int n,map<int,int> &mp) {
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

int reverse(int n) {
    int result = 0;
    while (n > 0) {
        result = result * 10 + (n % 10);
        n /= 10;
    }
    return result;
}
void solve(map<int,int> &mp) {
    for (pair<int,int> p : mp) {
        if (mp[reverse(p.first)]==reverse(p.second)) {
            cout<<p.first<<" "<<p.second<<" : ";
            cout<<reverse(p.first)<<" " <<reverse(p.second)<<endl;
        }
    }
}
int main() {
    long n=pow(11,5);
    map<int,int> mp;
    primelist(n,mp);
    for (pair<int,int> p : mp) {
        cout << p.first << " " << p.second << endl;
    }
    solve(mp);
    return 0;
}