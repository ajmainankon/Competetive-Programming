#include <iostream>
#include <cmath>
  
using namespace std;

int main()
{
    int a = 2, v = 2, X, Y; 
    bool mat [5][5];
      
    for(int i = 0; i < 5; i++){   
        for(int j = 0; j < 5; j++){
            cin >> mat [i][j];
            if(mat [i][j] == 1){
                X = i;
                Y = j;
            }
        }
        cout << endl;
    }
    int turn1 = abs(X - a);
    int turn2 = abs(Y - v);
    int turnTot = turn1 + turn2;
    cout << turnTot;

    return 0;
}