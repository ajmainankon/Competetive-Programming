#include <iostream>
#include <list>
#include<bits/stdc++.h> 
using namespace std;

int main(){
    int how_many_test, how_many;
    std::string text, test_text;
    std::list <string> gqlist;
    cin >> how_many_test;
    for (int i = 0; i < how_many_test; i++)
    {
        cin >> text >> how_many;
        for (int i = 0; i < how_many; i++)
        {
            cin >> test_text;
            gqlist.push_back(test_text);
            
            
        }
        
        
        for (int i = 0; i < gqlist.size(); i++)
        {
            size_t found = text.find(test_text); 
            if (found != string::npos){
                cout << "y";
            }
            else{
                cout << "n";
            }
            }
        }
        
        

    }
     




