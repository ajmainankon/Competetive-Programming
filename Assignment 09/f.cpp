#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<queue>
#include<algorithm>
using namespace std;
typedef long long int ll;

int main(){
int how_many;
cin >> how_many;
while(how_many--){
    double n, m;
    cin >> n >> m;
    cout << (int)(ceil(m/n)*n - m) << endl;
    }
    return 0;
}