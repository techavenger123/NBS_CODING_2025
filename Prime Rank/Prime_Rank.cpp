//
// Created by MIHIR MITHANI on 20/08/25.
//
#include <stdc++.h>
#include <arr.h>

bool isprime(int n) {
    if (n<=1){return false;}
    // if (n%2==0){return false;}
    for (int i = 2; i <=n/i; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
void primelist(int n,map<int,int> &mp) { //n^1.5
    int currentrank=1;
    mp[currentrank++]=2;
    for (int i=3;i<=n;i+=2) {
        if (isprime(i)) {
            mp[currentrank] = i;
            currentrank++;
        }
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
    map<int,int> mp1;
    for (pair<int,int> p : mp) { //n/ln(n) * 2ln(n)
        if (mp[reverse(p.first)]==reverse(p.second)) {
            cout<<p.first<<" "<<p.second<<" : ";
            cout<<reverse(p.first)<<" " <<reverse(p.second)<<endl;
        }
    }
}
int main() {
    long n=pow(10,5);
    map<int,int> mp;
    primelist(n,mp); //n^1.5
    for (pair<int,int> p : mp) { // n/ln(n)
        cout << p.first << " " << p.second << endl;
    }
    //total time complexity == n^1.5 + nln(n)
    solve(mp); // nln(n)
    return 0;
}