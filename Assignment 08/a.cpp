#include"bits/stdc++.h"
using namespace std;
typedef long long ll;


int main()
{
    int how_many;
    ll arr[2000];
    while(cin >> how_many){
        if(how_many==0){
            break;
        }
        ll cnt=0;
        int car = sizeof(arr);
        memset(arr,0,car);
        
        for(int i=0; i<how_many ;i++){
            cin>>arr[i];
        }

        sort(arr,arr+how_many);
        
        for(int i=0;i<how_many;i++){
            for(int j=i+1;j<how_many;j++){

                ll temp=arr[i]+arr[j];

                int cry = upper_bound(arr,arr+how_many,temp)-arr;
                cnt+=how_many-(cry);
                }
            }
        cout << cnt << endl;
        
    }
    return 0;
}