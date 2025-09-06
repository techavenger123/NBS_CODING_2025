//
// Created by MIHIR MITHANI on 13/08/25.
//

#include <stdc++.h>
#include <arr.h>

double meanvec(vector<int> &v) {
    double sum = 0;
    for (int i: v) {
        sum += i;
    }
    return sum / v.size();
}

vector<int> modevec(vector<int> &v) {
    vector<int> res;
    unordered_map<int, int> map;
    int freq = 1;
    for (int i: v) {
        map[i]++;
        if (map[i] > freq) {
            freq = map[i];
            res.clear();
            res.push_back(i);
        }
        else if (map[i] == freq) {
            //if (find(res.begin(), res.end(), i) == res.end())
            res.push_back(i);
        }
    }
    // for (pair<int, int> p:map) {
    //     if (p.second == freq) {
    //         res.push_back(p.first);
    //     }
    // }
    return res;
}

double medianvec(vector<int> &v) {
    return (!(v.size() % 2)) ? (v[v.size() / 2 - 1] + v[v.size() / 2]) / 2.0 : v[v.size() / 2];
}

int main() {
    vector<int> v;
    get_vector(v);
    double mean = meanvec(v);
    cout << "mean : " << mean << endl;
    vector<int> mode = modevec(v);
    cout << "Mode : ";
    print_vector(mode);
    double median = medianvec(v);
    cout << "Median : " << median << endl;
    return 0;
}
