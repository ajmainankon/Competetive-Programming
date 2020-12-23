#include<stdio.h>  
#include<iostream>  
#include<algorithm> 
#include <cmath> 
#include<vector>  
using namespace std;  

int a,b;
vector<int> cry;
vector<int> sad;
vector<int> filla;


int main(){ 
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        int k;
        cin >> k;
        cry.push_back(k);
    }
    for (int i = 0; i < b; i++)
    {
        int l;
        cin >> l;
        sad.push_back(l);
    }

    int manik =0;

    for (int i = 0; i < sad.size(); i++){

        for (int z = 0; z < cry.size(); z++){

            if ((cry[z] < sad[i]) || (cry[z] == sad[i])){
                manik = manik +1;
                z++;
            }
            
            
        }
        filla.push_back(manik);
        cout << filla [0] << endl; 
    
        manik = 0; 
        
    }
 

    
    
    


    

    

    return 0;

}  