#include <iostream>
#include <queue>
#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<vector>
using namespace std;
#define ll long long

int how_many, x;
ll total;
int main() {
    while(cin >> how_many, how_many) {
	total = 0;
    priority_queue<ll> q;
	
	while(how_many--) {
	    cin >> x;
	    q.push(-x);
        
	}
	while(q.size() > 1) {
        
	    ll qelem1 = q.top();
	    q.pop();
	    ll qelem2 = q.top();
	    q.pop();
	    total = total-qelem1-qelem2;
	    q.push(qelem1+qelem2);
	}

	cout << total << endl;

    }
    return 0;
}