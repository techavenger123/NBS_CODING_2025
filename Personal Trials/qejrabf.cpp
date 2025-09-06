// Created by MIHIR MITHANI on 01/09/25.
//
//


int code(int n) {
    if (n<=0) {
        return n;
    }
    int m;
    for (int i=0;i<=n;i++) {
        m=code(n-1)+code(n-4)+code(n-2)+code(n-3);
    }
    return m;
}