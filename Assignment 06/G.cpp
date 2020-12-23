#include<cstdio>
#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
	int num1,num2;
	string str1,str2;
	map <string , string> out;
	map <string , string> :: iterator it;
	cin >> num1;
	getchar();
	while(num1--){
		getline(cin , str1);
		getline(cin , str2);
		out[str1] = str2;
	}
	cin >> num2;
	getchar();
	while(num2--){
		getline(cin , str1);
		it = out.begin();
		while(it!=out.end()){
			if(it->first==str1){
				cout << it->second << endl;
				break;
			}
			else if(it->second==str1){
				cout << it->first << endl;
				break;
			}
			it++;
		}
	}
	return 0;
}