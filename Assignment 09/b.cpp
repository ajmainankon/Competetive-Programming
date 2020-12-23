#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    int how_many; 
    cin >> how_many;

    while (how_many!=0) {
        int x, totalC, count;
        cin >> x;
        totalC = 0;
        while (x!=0) {
            cin >> count;
            totalC ^= count; //(XOR at cpp)
            x--;
        }
        how_many--;


        if (totalC!=0){
            cout << "First" << endl;
        }
        else{
            cout << "Second" <<endl;
        }
    }
    return 0;
}