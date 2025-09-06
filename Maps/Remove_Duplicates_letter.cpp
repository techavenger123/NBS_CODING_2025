//
// Created by MIHIR MITHANI on 03/09/25.
//
#include <stdc++.h>
#include <arr.h>

typedef unordered_map<char, int> umci;

void print_map(umci &mp) {
    for (pair<char, int> p: mp) {
        cout << p.first << " : " << p.second << endl;
    }
}

void populate_map(string &str, umci &mp, int n) {
    for (char c: str) {
        mp[c]++;
        if (mp[c] > str.length()/2) {
            cout<<"No Match";
            return;
        }
    }
    print_map(mp);

    string s;
    while (mp.size() > 1) {
        for (auto it = mp.begin(); it != mp.end();) {
            s += it->first;
            it->second--;
            if (it->second == 0) {
                it = mp.erase(it);
            } else {
                it++;
            }
        }
    }

    int m = mp.begin()->second;
    char c = mp.begin()->first;

    if (s[0] != c) {
        s = c + s;
        m--;
    }

    if (s[s.length() - 1] != c) {
        s = s + c;
        m--;
    }

    for (int i = 1; i < str.size(); i++) {
        if (s[i - 1] != c && s[i] != c) {
            s.insert(i, 1, c);
            m--;
        }
    }
    cout << s << endl;
    cout<<"Original string Size: "<<s.length()<<endl;
    cout<<"Modified string Size: "<<s.length()<<endl;
}

int main() {
    string s;
    getline(cin, s);
    unordered_map<char, int> mp;
    populate_map(s, mp, s.length());
    // print_map(mp);
    // uniquestr(mp);
    return 0;
}