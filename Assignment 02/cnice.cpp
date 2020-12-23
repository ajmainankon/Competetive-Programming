#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
#include <list>
#include<bits/stdc++.h> 

using namespace std;

int how_many_test, how_many, k;
int main()
{
    cin >> how_many_test;
    for(int j=0;j<how_many_test;j++){
        string text;
        cin >> text;
        string::size_type idx;
        cin >> how_many;
        for(int i=0;i<how_many;i++){
            k=0; string strFind;
            cin >> strFind;

            idx=text.find(strFind);
            if(idx!=string::npos){
                string subs = text.substr(idx, strFind.size());
                cout << "y" << endl; k=1;
                }
            idx=text.find(strFind, idx + strFind.size());
            if(idx!=string::npos){
                string subs = text.substr(idx, strFind.size());
                cout << "y" << endl; k=1;
                }
            if(k==0)
                cout << "n" << endl;
                }
                }
                return 0;
            }