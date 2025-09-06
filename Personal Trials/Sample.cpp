//
// Created by MIHIR MITHANI on 18/08/25.
//
#include <stdc++.h>

using namespace std;
int migratoryBirds(vector<int> &arr) {
    // int freq[5] = {0};
    vector<int> freq(5,0);

    for (int &id : arr) {
        freq[id-1]++;
    }
    int result = 1;
    for (int i = 1; i < 5; i++) {
        if (freq[i] > freq[result]) {
            result = i;
        }
    }
    return result;
}

int main(){
    vector<int> v={1,2,2,3,3,4,4};
    cout<<migratoryBirds(v);
    return 0;
}