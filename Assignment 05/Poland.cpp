#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<vector>

using namespace std;

int main()
{
	set<string> poland,enemy,common,done;
	char s[1005];
	int n, m;
	cin >> n >> m;
	
	for(int i = 0 ; i < n ; i++){
		cin >> s;
		
		if(done.count(s))
			continue ;
		poland.insert(s);
		done.insert(s);
	}
	
	for(int i = 0 ; i < m ; i++){
		cin >> s;
		if(done.count(s)){
			if(poland.count(s)){
				common.insert(s);
				poland.erase(s);
			}
		}
		else{
			done.insert(s);
			enemy.insert(s);
		}
	}
	
	int one = poland.size();
	int two = common.size();
	int three = enemy.size();

	int temp = two/2;
	three += temp;
	one += (two-temp);
	
	if (one > three){
        cout << "YES" << endl;
    }
    else
    {
        cout<< "NO" << endl;
    }
    
	return 0;
}
    