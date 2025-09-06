//
// Created by MIHIR MITHANI on 31/07/25.
//

#include <stdc++.h>
#include <arr.h>

auto numdigit(int n) {
    int count=0;
    while (n) {
        n = n/10;
        count++;
    }
    return count;
}
bool isarms(int n) {
    int m=n;
    int digits=numdigit(n);
    int sum=0;
    for(int i=0;i<digits;i++) {
        sum += pow(n%10,digits);
        n=n/10;
    }
    if (m==sum) {return true;}
    return false;
}
void listarms(vector<int> &res, const int n) {
    if (n<=0){return;}
    for (int i = 0; i < n; i++) {
        if (isarms(i)) {
            res.push_back(i);
        }
    }
}

void solve() {
    int n;
    cin>>n;
    vector<int> res;
    listarms(res,n);
    print_vector(res);
    cout<<res.size()<<endl;
}
int main() {
    solve();
    return 0;
}