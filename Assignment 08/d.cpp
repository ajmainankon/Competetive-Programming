using namespace std;
#include"bits/stdc++.h"
#include <iostream>

int main() {
    int n;
    cin >> n;
    long long total = 0;
    
    for (int a = 1; a <= n; ++a) {
        total = total +  ((n - 1) / a);
    }

    cout << total << endl;

    return 0;
}