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

int how_many, x, i ,j, N;
ll total;
int main() {
    while(cin >> N, N) {
	int G=0;
    for(i=1;i<N;i++){
          for(j=i+1;j<=N;j++){
              G+=__gcd(i,j);

          }
    }
  
{

}

	cout << G << endl;

    }
    return 0;
}