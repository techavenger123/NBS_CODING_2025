//
// Created by MIHIR MITHANI on 10/09/25.
//
#include <stdc++.h>
#include <arr.h>


void solve() {
    int a=4;
    int *ptr=&a;
    cout<<a<<" : "<<ptr<<endl;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr1=&arr[0];
    int *ptr2=&arr[7];
    cout<<ptr1<<" : "<<ptr2<<" : "<<ptr2-ptr1<<endl;
}
int main() {
    solve();
    return 0;
}