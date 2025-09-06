//
// Created by MIHIR MITHANI on 27/08/25.
//
#include <stdc++.h>
#include <arr.h>

vector<int> listprime(int n) {
    vector<int> v;
    v.push_back(0);
    vector<bool> primes(n+1,true);
    for(int i=2;i<=n/i;i++) {
        if(primes[i]) {
            v.push_back(i);
            for(int j=i*i;j<=n/i;j+=i) {
                primes[j]=false;
            }
        }
    }
    int sq=sqrt(n);
    if (sq%2!=0) {
        sq++;
    }
    for (int i=sq+1;i<=n;i+=2) {
        if(primes[i]) {
            v.push_back(i);
        }
    }
    return v;
}


int reverse(int n) {
    int m=n,rev=0;
    while(m) {
        rev=rev*10+m%10;
        m/=10;
    }
    return rev;
}

void solve(vector<int> &v) {
    int n=v.size();
    for (int i=1;i<n;i++) {
        if (v[reverse(i)]==reverse(v[i])) {
            cout<<v[i]<<" "<<i<<endl;
        }
    }
}

int main() {
    int n=pow(10,6);
    vector<int> v=listprime(n);
    //print_vector(v);
    solve(v);
    // cout<<reverse(24142);
    // cout<<" "<<v[24142]<<endl;
    return 0;
}