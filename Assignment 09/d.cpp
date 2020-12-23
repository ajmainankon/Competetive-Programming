#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int how_many,a=0,b=1,c=0;
    cin >> how_many;
    for(int i=1; i<how_many; i++)
    {
        if(i%2==1)
        {
            cout << c << endl;
            c=a+b;
            a=c;
        }
        if(i==2){
            cout << c << endl;
        }
        if(i%2==0){
            cout << c << endl;
            c=a+b;
            b=c;
        }
    }
    cout << c << endl;
    return 0;
}