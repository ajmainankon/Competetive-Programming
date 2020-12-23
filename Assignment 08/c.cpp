#include"bits/stdc++.h"
#include<algorithm>
using namespace std;

int matt[268435456];
int how_many,a[4000],b[4000],c[4000],d[4000];
int main()
{
    cin >> how_many;

    for(int i=0; i<how_many; i++){
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        }
    for(int i=0; i<how_many; i++){
        for(int j=0; j<how_many; j++){
            int cry = i*how_many+j;
            matt[cry] = a[i] + b[j];
            }
    }

    sort(matt,matt+how_many*how_many);
    int total = 0;
    for(int i=0; i<how_many; i++){
        for(int j=0; j<how_many; j++){

            int task = c[i]+d[j];
            int newtmp = -task;
            total = total + upper_bound(matt,matt+how_many*how_many,newtmp)-lower_bound(matt,matt+how_many*how_many,newtmp);
 
        }
    }

    cout << total << endl;
 
    return 0;
}
