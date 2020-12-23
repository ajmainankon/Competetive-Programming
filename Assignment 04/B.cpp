#include<bits/stdc++.h>
using namespace std;
#define ll              long long
#define f(x)            ll x; cin>>x; while(x--)

int main(){
	ll i, arr[100001];
	for (i = 1; i <= 100000; ++i)
		arr[i] = arr[i - 1] + 3 * i - 1;

	f(t)
	{
		ll n, total = 0; 
        cin >> n;
		while (n > 1)
		{
			i = upper_bound(arr, arr + 100000, n) - arr;
            cout<<i;
			i--;
			n = n - arr[i];
			total++;
		}

		cout << total << endl;
	}
    // cout << upper_bound(arr, arr+100000, 5) - arr; -arr because upper bound will point to the index of n, which is stored in the array arr(0x19237smth), so -arr = the exact point or number it is situated.
	return 0;
}