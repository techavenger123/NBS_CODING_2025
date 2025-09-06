//
// Created by MIHIR MITHANI on 27/08/25.
//
#include <stdc++.h>
#include <arr.h>

void populate(set<string> &s) {
    s.insert("Donkey");
    s.insert("owl");
    s.insert("cow");
    s.insert("siberian wolf");
    s.insert("koala");
}
void printset(set<string> &s) {
    for (string s:s) {
        cout << s << endl;
    }
    set<string>::iterator it;
}
void solve(set<string> &s) {
    populate(s);
    printset(s);
}
void populatenums(set<int> &nums) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        nums.insert(a);
    }
}
void printunique(set<int> &nums) {
    for (int i:nums) {
        cout << i << endl;
    }
}
int main() {
    set<string> animal;
    solve(animal);
    set<int> nums;
    populatenums(nums);
    printunique(nums);
    return 0;
}