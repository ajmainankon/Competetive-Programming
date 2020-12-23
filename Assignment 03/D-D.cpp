#include<bits/stdc++.h>

using namespace std;

int main(){

    int var,list01[3], cry=3;
    cin >> var;
    for(int i = 1; i <= var; i++){

        cin >> list01[0] >> list01[1] >> list01[2];
        sort(list01,list01+cry);
        cout << "Case " << i << ": " << list01[1] << endl;
    }
    return 0;
}