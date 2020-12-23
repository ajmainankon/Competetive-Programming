#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int a,b,total=1;
    cin>>a>>b;
    int cry = min(a,b);
    
    for(int i=1;i<=cry;i++){
        total = total*i;
    }

    cout<<total<<endl;
    return 0;
}