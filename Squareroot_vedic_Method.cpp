//
// Created by MIHIR MITHANI on 25/08/25.
//
#include <stdc++.h>
#include <arr.h>


double findsqrt(int &n) {
    double i=0;
    double k;
    while(true) {
        k=i*i;
        if (k <= n) {
            i++;
        }
        else {
            break;
        }
    }
    cout<<setprecision(2);
    return i + (n - i * i) / (2.0 * i);
}

double percentage_diff(double &n,double &m) {
    if (n>m) {
        return (n-m)/((n+m)/2) * 200;
    }
    return (m-n)/((n+m)) * 200;
}



int main() {
    int n;
    cin>>n;
    n++;
    vector<double> v(n),v1(n),difference(n);
    for (int i=1;i<n;i++) {
        v[i]=findsqrt(i);
        v1[i]=sqrt(i);
        difference[i]=percentage_diff(v[i],v1[i]);
    }
    for (int i=0;i<n;i++) {
        cout<<"Number :"<<i<<" VedicMethod : "<<v[i]<<" Real : "<<v1[i]<<" Difference : "<<difference[i]<<"%      "<<endl;
    }
    return 0;
}